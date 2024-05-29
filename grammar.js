module.exports = grammar({
    name: 'alan',

    // Define rules (terminals and non-terminals)
    rules: {

        // Non-terminals (syntactical rules)
        source: $ => seq(
            $.SOURCE,
            $.identifier,
            repeat($.function),
            $.body
        ),

        function: $ => seq(
            $.FUNCTION,
            $.identifier,
            '(',
            optional(seq(
                $.type,
                $.identifier,
                repeat(seq(',', $.type, $.identifier))
            )),
            ')',
            optional(seq(
                $.TO,
                $.type
            )),
            $.body
        ),

        body: $ => seq(
            $.BEGIN,
            repeat($.variable_definition),
            $.statements,
            $.END
        ),

        type: $ => seq(
            choice($.BOOLEAN, $.INTEGER),
            optional($.ARRAY)
        ),

        variable_definition: $ => seq(
            $.type,
            $.identifier,
            repeat(seq(',', $.identifier)),
            ';'
        ),

        statements: $ => choice(
            $.RELAX,
            seq($.statement, repeat(seq(
                ';',
                $.statement
            )))
        ),

        statement: $ => choice(
            $.assign_statement,
            $.if_statement,
            $.while_statement,
            $.call_statement,
            $.input_statement,
            $.output_statement,
            $.leave_statement,
        ),

        assign_statement: $ => seq(
            $.identifier,
            optional(seq(
                '[',
                $.simple_expression,
                ']'
            )),

            ':=',

            choice($.expression,
                seq(
                    $.ARRAY,
                    $.simple_expression,
                ))
        ),

        if_statement: $ => seq(
            $.IF,
            $.expression,
            $.THEN,
            $.statements,
            repeat(seq(
                $.ELSIF,
                $.expression,
                $.THEN,
                $.statements
            )),
            optional(seq(
                $.ELSE,
                $.statements
            )),
            $.END
        ),

        while_statement: $ => seq(
            $.WHILE,
            $.expression,
            $.DO,
            $.statements,
            $.END
        ),

        call_statement: $ => seq(
            $.CALL,
            $.identifier,
            '(',
            optional(seq(
                $.expression,
                repeat(seq(
                    ',',
                    $.expression
                ))
            )),
            ')'
        ),

        input_statement: $ => seq(
            $.GET,
            $.identifier,
            optional(seq(
                '[',
                $.simple_expression,
                ']'
            ))
        ),

        output_statement: $ => seq(
            $.PUT,
            choice(
                $.expression,
                $.string
            ),
            repeat(seq(
                '.',
                choice(
                    $.expression,
                    $.string
                )
            ))
        ),

        leave_statement: $ => seq(
            $.LEAVE,
            optional($.expression)
        ),

        expression: $ => seq(
            $.simple_expression,
            optional(seq(
                $.relational_operator,
                $.simple_expression
            ))
        ),

        relational_operator: $ => choice(
            '<',
            '>',
            '<=',
            '>=',
            '=',
            '<>'
        ),

        simple_expression: $ => seq(
            optional('-'),
            $.term,
            repeat(seq(
                $.additive_operator,
                $.term
            ))
        ),

        additive_operator: $ => choice(
            '+',
            '-',
            $.OR
        ),

        term: $ => seq(
            $.factor,
            repeat(seq(
                $.multiplicative_operator,
                $.factor
            ))
        ),

        multiplicative_operator: $ => choice(
            '*',
            '/',
            $.REMAINDER,
            $.AND
        ),


        factor: $ => choice(
            seq(
                $.identifier,
                optional(choice(seq(
                    '[',
                    $.simple_expression,
                    ']'
                ),
                    seq(
                        '(',
                        optional(seq(
                            $.expression,
                            repeat(seq(
                                ',',
                                $.expression
                            ))
                        )),
                        ')'
                    ))
                )),
            $.number,
            $.TRUE,
            $.FALSE,
            seq(
                '(',
                $.expression,
                ')'
            ),
            seq(
                $.NOT,
                $.factor
            )
        ),


        comment: _ => token(seq(
            '{',
            repeat(choice(
                seq('{', /[^{}]*/, '}'),
                /[^{}]/,
            )),
            '}'
        )),

        TRUE: _ => 'true',
        FALSE: _ => 'false',
        SOURCE: _ => 'source',
        FUNCTION: _ => 'function',
        BEGIN: _ => 'begin',
        END: _ => 'end',
        IF: _ => 'if',
        THEN: _ => 'then',
        ELSE: _ => 'else',
        ELSIF: _ => 'elsif',
        WHILE: _ => 'while',
        DO: _ => 'do',
        GET: _ => 'get',
        PUT: _ => 'put',
        LEAVE: _ => 'leave',
        RELAX: _ => 'relax',
        CALL: _ => 'call',
        BOOLEAN: _ => 'boolean',
        INTEGER: _ => 'integer',
        ARRAY: _ => 'array',
        TO: _ => 'to',
        REMAINDER: _ => 'rem',
        AND: _ => 'and',
        OR: _ => 'or',
        NOT: _ => 'not',



        identifier: _ => /[a-zA-Z_][a-zA-Z_0-9]{0,31}/,


        number: _ => /\d+/,
        string: _ => seq(
            '"',
            repeat(choice(
                /[\\][nt\\"]/,
                /[^\\"]/
            )),
            '"'
        ),
    },
    extras: $ => [
        /\s/,
        $.comment
    ]
});
