;; Keywords
(SOURCE) @keyword
(FUNCTION) @keyword
(BEGIN) @keyword
(END) @keyword
(IF) @keyword
(THEN) @keyword
(ELSE) @keyword
(ELSIF) @keyword
(WHILE) @keyword
(DO) @keyword
(GET) @keyword
(PUT) @keyword
(LEAVE) @keyword
(RELAX) @keyword
(CALL) @keyword
(BOOLEAN) @keyword
(INTEGER) @keyword
(ARRAY) @keyword
(TO) @keyword
(REMAINDER) @keyword
(AND) @keyword
(OR) @keyword
(NOT) @keyword
(TRUE) @keyword
(FALSE) @keyword

;; Constants
(number) @constant
(string) @string

;; Comments
(comment) @comment

;; Identifiers
(identifier) @variable

;; Functions
(function name: (identifier) @function)
(call_statement (identifier) @function)

;; Types
(type (BOOLEAN) @type)
(type (INTEGER) @type)
(type (ARRAY) @type)

;; Statements
(assign_statement) @statement
(if_statement) @conditional
(while_statement) @repeat
(call_statement) @function.call
(input_statement) @statement
(output_statement) @statement
(leave_statement) @statement

;; Expressions
(expression) @expression
(simple_expression) @expression
(term) @expression
(factor) @expression

;; Operators
(relational_operator) @operator
(additive_operator) @operator
(multiplicative_operator) @operator
