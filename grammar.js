module.exports = grammar({
    name: 'alan',

    // Define rules (terminals and non-terminals)
    rules: {

        // Non-terminals (syntactical rules)
        program: $ => repeat($.statement),

        statement: $ => choice(
            $.variableDeclaration,
            $.functionCall,
            // Add other types of statements
        ),

        variableDeclaration: $ => seq(
            'let',
            $.variable,
            '=',
            $.expression,
            ';'
        ),
        // Terminals (lexical rules)
        variable: $ => /[a-zA-Z_]\w*/,
        number: $ => /\d+/,
        string: $ => /".*?"/,

        functionCall: $ => seq(
            $.variable,
            '(',
            optional($.arguments),
            ')',
            ';'
        ),

        arguments: $ => seq(
            $.expression,
            repeat(seq(',', $.expression))
        ),

        expression: $ => choice(
            $.variable,
            $.number,
            $.string,
            $.functionCall,
            // Add other types of expressions
        ),
    }
});
