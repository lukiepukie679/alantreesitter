#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 161
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_COMMA = 2,
  anon_sym_RPAREN = 3,
  anon_sym_SEMI = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_COLON_EQ = 7,
  anon_sym_DOT = 8,
  anon_sym_LT = 9,
  anon_sym_GT = 10,
  anon_sym_LT_EQ = 11,
  anon_sym_GT_EQ = 12,
  anon_sym_EQ = 13,
  anon_sym_LT_GT = 14,
  anon_sym_DASH = 15,
  anon_sym_PLUS = 16,
  anon_sym_STAR = 17,
  anon_sym_SLASH = 18,
  sym_comment = 19,
  sym_TRUE = 20,
  sym_FALSE = 21,
  sym_SOURCE = 22,
  sym_FUNCTION = 23,
  sym_BEGIN = 24,
  sym_END = 25,
  sym_IF = 26,
  sym_THEN = 27,
  sym_ELSE = 28,
  sym_ELSIF = 29,
  sym_WHILE = 30,
  sym_DO = 31,
  sym_GET = 32,
  sym_PUT = 33,
  sym_LEAVE = 34,
  sym_RELAX = 35,
  sym_CALL = 36,
  sym_BOOLEAN = 37,
  sym_INTEGER = 38,
  sym_ARRAY = 39,
  sym_TO = 40,
  sym_REMAINDER = 41,
  sym_AND = 42,
  sym_OR = 43,
  sym_NOT = 44,
  sym_identifier = 45,
  sym_number = 46,
  anon_sym_DQUOTE = 47,
  aux_sym_string_token1 = 48,
  aux_sym_string_token2 = 49,
  sym_source = 50,
  sym_function = 51,
  sym_body = 52,
  sym_type = 53,
  sym_variable_definition = 54,
  sym_statements = 55,
  sym_statement = 56,
  sym_assign_statement = 57,
  sym_if_statement = 58,
  sym_while_statement = 59,
  sym_call_statement = 60,
  sym_input_statement = 61,
  sym_output_statement = 62,
  sym_leave_statement = 63,
  sym_expression = 64,
  sym_relational_operator = 65,
  sym_simple_expression = 66,
  sym_additive_operator = 67,
  sym_term = 68,
  sym_multiplicative_operator = 69,
  sym_factor = 70,
  sym_string = 71,
  aux_sym_source_repeat1 = 72,
  aux_sym_function_repeat1 = 73,
  aux_sym_body_repeat1 = 74,
  aux_sym_variable_definition_repeat1 = 75,
  aux_sym_statements_repeat1 = 76,
  aux_sym_if_statement_repeat1 = 77,
  aux_sym_call_statement_repeat1 = 78,
  aux_sym_output_statement_repeat1 = 79,
  aux_sym_simple_expression_repeat1 = 80,
  aux_sym_term_repeat1 = 81,
  aux_sym_string_repeat1 = 82,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_DOT] = ".",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [sym_comment] = "comment",
  [sym_TRUE] = "TRUE",
  [sym_FALSE] = "FALSE",
  [sym_SOURCE] = "SOURCE",
  [sym_FUNCTION] = "FUNCTION",
  [sym_BEGIN] = "BEGIN",
  [sym_END] = "END",
  [sym_IF] = "IF",
  [sym_THEN] = "THEN",
  [sym_ELSE] = "ELSE",
  [sym_ELSIF] = "ELSIF",
  [sym_WHILE] = "WHILE",
  [sym_DO] = "DO",
  [sym_GET] = "GET",
  [sym_PUT] = "PUT",
  [sym_LEAVE] = "LEAVE",
  [sym_RELAX] = "RELAX",
  [sym_CALL] = "CALL",
  [sym_BOOLEAN] = "BOOLEAN",
  [sym_INTEGER] = "INTEGER",
  [sym_ARRAY] = "ARRAY",
  [sym_TO] = "TO",
  [sym_REMAINDER] = "REMAINDER",
  [sym_AND] = "AND",
  [sym_OR] = "OR",
  [sym_NOT] = "NOT",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [sym_source] = "source",
  [sym_function] = "function",
  [sym_body] = "body",
  [sym_type] = "type",
  [sym_variable_definition] = "variable_definition",
  [sym_statements] = "statements",
  [sym_statement] = "statement",
  [sym_assign_statement] = "assign_statement",
  [sym_if_statement] = "if_statement",
  [sym_while_statement] = "while_statement",
  [sym_call_statement] = "call_statement",
  [sym_input_statement] = "input_statement",
  [sym_output_statement] = "output_statement",
  [sym_leave_statement] = "leave_statement",
  [sym_expression] = "expression",
  [sym_relational_operator] = "relational_operator",
  [sym_simple_expression] = "simple_expression",
  [sym_additive_operator] = "additive_operator",
  [sym_term] = "term",
  [sym_multiplicative_operator] = "multiplicative_operator",
  [sym_factor] = "factor",
  [sym_string] = "string",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_variable_definition_repeat1] = "variable_definition_repeat1",
  [aux_sym_statements_repeat1] = "statements_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_call_statement_repeat1] = "call_statement_repeat1",
  [aux_sym_output_statement_repeat1] = "output_statement_repeat1",
  [aux_sym_simple_expression_repeat1] = "simple_expression_repeat1",
  [aux_sym_term_repeat1] = "term_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_comment] = sym_comment,
  [sym_TRUE] = sym_TRUE,
  [sym_FALSE] = sym_FALSE,
  [sym_SOURCE] = sym_SOURCE,
  [sym_FUNCTION] = sym_FUNCTION,
  [sym_BEGIN] = sym_BEGIN,
  [sym_END] = sym_END,
  [sym_IF] = sym_IF,
  [sym_THEN] = sym_THEN,
  [sym_ELSE] = sym_ELSE,
  [sym_ELSIF] = sym_ELSIF,
  [sym_WHILE] = sym_WHILE,
  [sym_DO] = sym_DO,
  [sym_GET] = sym_GET,
  [sym_PUT] = sym_PUT,
  [sym_LEAVE] = sym_LEAVE,
  [sym_RELAX] = sym_RELAX,
  [sym_CALL] = sym_CALL,
  [sym_BOOLEAN] = sym_BOOLEAN,
  [sym_INTEGER] = sym_INTEGER,
  [sym_ARRAY] = sym_ARRAY,
  [sym_TO] = sym_TO,
  [sym_REMAINDER] = sym_REMAINDER,
  [sym_AND] = sym_AND,
  [sym_OR] = sym_OR,
  [sym_NOT] = sym_NOT,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_source] = sym_source,
  [sym_function] = sym_function,
  [sym_body] = sym_body,
  [sym_type] = sym_type,
  [sym_variable_definition] = sym_variable_definition,
  [sym_statements] = sym_statements,
  [sym_statement] = sym_statement,
  [sym_assign_statement] = sym_assign_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_call_statement] = sym_call_statement,
  [sym_input_statement] = sym_input_statement,
  [sym_output_statement] = sym_output_statement,
  [sym_leave_statement] = sym_leave_statement,
  [sym_expression] = sym_expression,
  [sym_relational_operator] = sym_relational_operator,
  [sym_simple_expression] = sym_simple_expression,
  [sym_additive_operator] = sym_additive_operator,
  [sym_term] = sym_term,
  [sym_multiplicative_operator] = sym_multiplicative_operator,
  [sym_factor] = sym_factor,
  [sym_string] = sym_string,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_variable_definition_repeat1] = aux_sym_variable_definition_repeat1,
  [aux_sym_statements_repeat1] = aux_sym_statements_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_call_statement_repeat1] = aux_sym_call_statement_repeat1,
  [aux_sym_output_statement_repeat1] = aux_sym_output_statement_repeat1,
  [aux_sym_simple_expression_repeat1] = aux_sym_simple_expression_repeat1,
  [aux_sym_term_repeat1] = aux_sym_term_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_TRUE] = {
    .visible = true,
    .named = true,
  },
  [sym_FALSE] = {
    .visible = true,
    .named = true,
  },
  [sym_SOURCE] = {
    .visible = true,
    .named = true,
  },
  [sym_FUNCTION] = {
    .visible = true,
    .named = true,
  },
  [sym_BEGIN] = {
    .visible = true,
    .named = true,
  },
  [sym_END] = {
    .visible = true,
    .named = true,
  },
  [sym_IF] = {
    .visible = true,
    .named = true,
  },
  [sym_THEN] = {
    .visible = true,
    .named = true,
  },
  [sym_ELSE] = {
    .visible = true,
    .named = true,
  },
  [sym_ELSIF] = {
    .visible = true,
    .named = true,
  },
  [sym_WHILE] = {
    .visible = true,
    .named = true,
  },
  [sym_DO] = {
    .visible = true,
    .named = true,
  },
  [sym_GET] = {
    .visible = true,
    .named = true,
  },
  [sym_PUT] = {
    .visible = true,
    .named = true,
  },
  [sym_LEAVE] = {
    .visible = true,
    .named = true,
  },
  [sym_RELAX] = {
    .visible = true,
    .named = true,
  },
  [sym_CALL] = {
    .visible = true,
    .named = true,
  },
  [sym_BOOLEAN] = {
    .visible = true,
    .named = true,
  },
  [sym_INTEGER] = {
    .visible = true,
    .named = true,
  },
  [sym_ARRAY] = {
    .visible = true,
    .named = true,
  },
  [sym_TO] = {
    .visible = true,
    .named = true,
  },
  [sym_REMAINDER] = {
    .visible = true,
    .named = true,
  },
  [sym_AND] = {
    .visible = true,
    .named = true,
  },
  [sym_OR] = {
    .visible = true,
    .named = true,
  },
  [sym_NOT] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_input_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_output_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_leave_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_relational_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_additive_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplicative_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_factor] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_output_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_simple_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_term_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 26,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 66,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 64,
  [117] = 117,
  [118] = 67,
  [119] = 119,
  [120] = 119,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 134,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(83);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(93);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(39);
      if (lookahead == '{') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == '{') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '{') ADVANCE(231);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == '{') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == '{') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == '{') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == '{') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(178);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'g') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 'p') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '{') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'g') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 'p') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '{') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'g') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 'p') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(167);
      if (lookahead == '{') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(117);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 76:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 77:
      if (lookahead == 'x') ADVANCE(128);
      END_STATE();
    case 78:
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 79:
      if (lookahead == '{') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(79)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 80:
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == '}') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(81);
      END_STATE();
    case 82:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(229);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_TRUE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_FALSE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_SOURCE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_FUNCTION);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_BEGIN);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_END);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_END);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_IF);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_IF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_THEN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_ELSE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_ELSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_ELSIF);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_ELSIF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_WHILE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_WHILE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_DO);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_GET);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_GET);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_PUT);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_PUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_LEAVE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_LEAVE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_RELAX);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_RELAX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_CALL);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_CALL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_BOOLEAN);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_BOOLEAN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_INTEGER);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_INTEGER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_ARRAY);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_ARRAY);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_TO);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_REMAINDER);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_AND);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_OR);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_NOT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == 'n') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '{') ADVANCE(231);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(230);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 79},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 79},
  [140] = {.lex_state = 79},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 79},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 79},
  [150] = {.lex_state = 79},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 79},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 79},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 79},
  [160] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_TRUE] = ACTIONS(1),
    [sym_FALSE] = ACTIONS(1),
    [sym_SOURCE] = ACTIONS(1),
    [sym_FUNCTION] = ACTIONS(1),
    [sym_BEGIN] = ACTIONS(1),
    [sym_END] = ACTIONS(1),
    [sym_IF] = ACTIONS(1),
    [sym_THEN] = ACTIONS(1),
    [sym_ELSE] = ACTIONS(1),
    [sym_ELSIF] = ACTIONS(1),
    [sym_WHILE] = ACTIONS(1),
    [sym_DO] = ACTIONS(1),
    [sym_GET] = ACTIONS(1),
    [sym_PUT] = ACTIONS(1),
    [sym_LEAVE] = ACTIONS(1),
    [sym_RELAX] = ACTIONS(1),
    [sym_CALL] = ACTIONS(1),
    [sym_BOOLEAN] = ACTIONS(1),
    [sym_INTEGER] = ACTIONS(1),
    [sym_ARRAY] = ACTIONS(1),
    [sym_TO] = ACTIONS(1),
    [sym_REMAINDER] = ACTIONS(1),
    [sym_AND] = ACTIONS(1),
    [sym_OR] = ACTIONS(1),
    [sym_NOT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(160),
    [sym_comment] = ACTIONS(3),
    [sym_SOURCE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(9), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_END,
      sym_THEN,
      sym_ELSE,
      sym_ELSIF,
      sym_DO,
      sym_REMAINDER,
      sym_AND,
      sym_OR,
  [37] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_term_repeat1,
    STATE(53), 1,
      sym_multiplicative_operator,
    ACTIONS(17), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_REMAINDER,
      sym_AND,
    ACTIONS(15), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_END,
      sym_THEN,
      sym_ELSE,
      sym_ELSIF,
      sym_DO,
      sym_OR,
  [76] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_term_repeat1,
    STATE(53), 1,
      sym_multiplicative_operator,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_REMAINDER,
      sym_AND,
    ACTIONS(21), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_END,
      sym_THEN,
      sym_ELSE,
      sym_ELSIF,
      sym_DO,
      sym_OR,
  [115] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_term_repeat1,
    STATE(53), 1,
      sym_multiplicative_operator,
    ACTIONS(30), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_REMAINDER,
      sym_AND,
    ACTIONS(28), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_END,
      sym_THEN,
      sym_ELSE,
      sym_ELSIF,
      sym_DO,
      sym_OR,
  [154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(32), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_END,
      sym_THEN,
      sym_ELSE,
      sym_ELSIF,
      sym_DO,
      sym_REMAINDER,
      sym_AND,
      sym_OR,
  [185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(36), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_END,
      sym_THEN,
      sym_ELSE,
      sym_ELSIF,
      sym_DO,
      sym_REMAINDER,
      sym_AND,
      sym_OR,
  [216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_END,
      sym_THEN,
      sym_ELSE,
      sym_ELSIF,
      sym_DO,
      sym_REMAINDER,
      sym_AND,
      sym_OR,
  [247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(9), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_END,
      sym_THEN,
      sym_ELSE,
      sym_ELSIF,
      sym_DO,
      sym_REMAINDER,
      sym_AND,
      sym_OR,
  [278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(40), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_END,
      sym_THEN,
      sym_ELSE,
      sym_ELSIF,
      sym_DO,
      sym_REMAINDER,
      sym_AND,
      sym_OR,
  [309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(44), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_END,
      sym_THEN,
      sym_ELSE,
      sym_ELSIF,
      sym_DO,
      sym_REMAINDER,
      sym_AND,
      sym_OR,
  [340] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_IF,
    ACTIONS(50), 1,
      sym_WHILE,
    ACTIONS(52), 1,
      sym_GET,
    ACTIONS(54), 1,
      sym_PUT,
    ACTIONS(56), 1,
      sym_LEAVE,
    ACTIONS(58), 1,
      sym_RELAX,
    ACTIONS(60), 1,
      sym_CALL,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(118), 1,
      sym_statement,
    STATE(141), 1,
      sym_statements,
    STATE(150), 1,
      sym_type,
    ACTIONS(62), 2,
      sym_BOOLEAN,
      sym_INTEGER,
    STATE(13), 2,
      sym_variable_definition,
      aux_sym_body_repeat1,
    STATE(85), 7,
      sym_assign_statement,
      sym_if_statement,
      sym_while_statement,
      sym_call_statement,
      sym_input_statement,
      sym_output_statement,
      sym_leave_statement,
  [394] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_IF,
    ACTIONS(50), 1,
      sym_WHILE,
    ACTIONS(52), 1,
      sym_GET,
    ACTIONS(54), 1,
      sym_PUT,
    ACTIONS(56), 1,
      sym_LEAVE,
    ACTIONS(58), 1,
      sym_RELAX,
    ACTIONS(60), 1,
      sym_CALL,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(118), 1,
      sym_statement,
    STATE(150), 1,
      sym_type,
    STATE(155), 1,
      sym_statements,
    ACTIONS(62), 2,
      sym_BOOLEAN,
      sym_INTEGER,
    STATE(32), 2,
      sym_variable_definition,
      aux_sym_body_repeat1,
    STATE(85), 7,
      sym_assign_statement,
      sym_if_statement,
      sym_while_statement,
      sym_call_statement,
      sym_input_statement,
      sym_output_statement,
      sym_leave_statement,
  [448] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_simple_expression_repeat1,
    STATE(51), 1,
      sym_additive_operator,
    ACTIONS(68), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(70), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_OR,
    ACTIONS(66), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      sym_END,
      sym_THEN,
      sym_ELSE,
      sym_ELSIF,
      sym_DO,
  [483] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_simple_expression_repeat1,
    STATE(51), 1,
      sym_additive_operator,
    ACTIONS(68), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(70), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_OR,
    ACTIONS(66), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      sym_END,
      sym_THEN,
      sym_ELSE,
      sym_ELSIF,
      sym_DO,
  [518] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_simple_expression_repeat1,
    STATE(51), 1,
      sym_additive_operator,
    ACTIONS(74), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(70), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_OR,
    ACTIONS(72), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      sym_END,
      sym_THEN,
      sym_ELSE,
      sym_ELSIF,
      sym_DO,
  [553] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_simple_expression_repeat1,
    STATE(51), 1,
      sym_additive_operator,
    ACTIONS(78), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(80), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_OR,
    ACTIONS(76), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      sym_END,
      sym_THEN,
      sym_ELSE,
      sym_ELSIF,
      sym_DO,
  [588] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_simple_expression_repeat1,
    STATE(51), 1,
      sym_additive_operator,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(70), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_OR,
    ACTIONS(83), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      sym_END,
      sym_THEN,
      sym_ELSE,
      sym_ELSIF,
      sym_DO,
  [623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(76), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_END,
      sym_THEN,
      sym_ELSE,
      sym_ELSIF,
      sym_DO,
      sym_OR,
  [650] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_IF,
    ACTIONS(50), 1,
      sym_WHILE,
    ACTIONS(52), 1,
      sym_GET,
    ACTIONS(54), 1,
      sym_PUT,
    ACTIONS(56), 1,
      sym_LEAVE,
    ACTIONS(58), 1,
      sym_RELAX,
    ACTIONS(60), 1,
      sym_CALL,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(118), 1,
      sym_statement,
    STATE(147), 1,
      sym_statements,
    STATE(85), 7,
      sym_assign_statement,
      sym_if_statement,
      sym_while_statement,
      sym_call_statement,
      sym_input_statement,
      sym_output_statement,
      sym_leave_statement,
  [693] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_IF,
    ACTIONS(50), 1,
      sym_WHILE,
    ACTIONS(52), 1,
      sym_GET,
    ACTIONS(54), 1,
      sym_PUT,
    ACTIONS(56), 1,
      sym_LEAVE,
    ACTIONS(58), 1,
      sym_RELAX,
    ACTIONS(60), 1,
      sym_CALL,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(118), 1,
      sym_statement,
    STATE(138), 1,
      sym_statements,
    STATE(85), 7,
      sym_assign_statement,
      sym_if_statement,
      sym_while_statement,
      sym_call_statement,
      sym_input_statement,
      sym_output_statement,
      sym_leave_statement,
  [736] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_IF,
    ACTIONS(50), 1,
      sym_WHILE,
    ACTIONS(52), 1,
      sym_GET,
    ACTIONS(54), 1,
      sym_PUT,
    ACTIONS(58), 1,
      sym_RELAX,
    ACTIONS(60), 1,
      sym_CALL,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(87), 1,
      sym_LEAVE,
    STATE(67), 1,
      sym_statement,
    STATE(96), 1,
      sym_statements,
    STATE(85), 7,
      sym_assign_statement,
      sym_if_statement,
      sym_while_statement,
      sym_call_statement,
      sym_input_statement,
      sym_output_statement,
      sym_leave_statement,
  [779] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_IF,
    ACTIONS(50), 1,
      sym_WHILE,
    ACTIONS(52), 1,
      sym_GET,
    ACTIONS(54), 1,
      sym_PUT,
    ACTIONS(56), 1,
      sym_LEAVE,
    ACTIONS(58), 1,
      sym_RELAX,
    ACTIONS(60), 1,
      sym_CALL,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(118), 1,
      sym_statement,
    STATE(146), 1,
      sym_statements,
    STATE(85), 7,
      sym_assign_statement,
      sym_if_statement,
      sym_while_statement,
      sym_call_statement,
      sym_input_statement,
      sym_output_statement,
      sym_leave_statement,
  [822] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_IF,
    ACTIONS(50), 1,
      sym_WHILE,
    ACTIONS(52), 1,
      sym_GET,
    ACTIONS(54), 1,
      sym_PUT,
    ACTIONS(58), 1,
      sym_RELAX,
    ACTIONS(60), 1,
      sym_CALL,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(87), 1,
      sym_LEAVE,
    STATE(67), 1,
      sym_statement,
    STATE(90), 1,
      sym_statements,
    STATE(85), 7,
      sym_assign_statement,
      sym_if_statement,
      sym_while_statement,
      sym_call_statement,
      sym_input_statement,
      sym_output_statement,
      sym_leave_statement,
  [865] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(49), 1,
      sym_relational_operator,
    ACTIONS(91), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(89), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_END,
      sym_THEN,
      sym_ELSE,
      sym_ELSIF,
      sym_DO,
  [893] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(25), 1,
      sym_simple_expression,
    STATE(88), 1,
      sym_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
    ACTIONS(103), 3,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [936] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_IF,
    ACTIONS(50), 1,
      sym_WHILE,
    ACTIONS(52), 1,
      sym_GET,
    ACTIONS(54), 1,
      sym_PUT,
    ACTIONS(56), 1,
      sym_LEAVE,
    ACTIONS(60), 1,
      sym_CALL,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(80), 1,
      sym_statement,
    STATE(85), 7,
      sym_assign_statement,
      sym_if_statement,
      sym_while_statement,
      sym_call_statement,
      sym_input_statement,
      sym_output_statement,
      sym_leave_statement,
  [973] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_IF,
    ACTIONS(50), 1,
      sym_WHILE,
    ACTIONS(52), 1,
      sym_GET,
    ACTIONS(54), 1,
      sym_PUT,
    ACTIONS(60), 1,
      sym_CALL,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(87), 1,
      sym_LEAVE,
    STATE(80), 1,
      sym_statement,
    STATE(85), 7,
      sym_assign_statement,
      sym_if_statement,
      sym_while_statement,
      sym_call_statement,
      sym_input_statement,
      sym_output_statement,
      sym_leave_statement,
  [1010] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(25), 1,
      sym_simple_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
    STATE(57), 2,
      sym_expression,
      sym_string,
  [1049] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      sym_END,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(25), 1,
      sym_simple_expression,
    STATE(88), 1,
      sym_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1090] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(25), 1,
      sym_simple_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
    STATE(65), 2,
      sym_expression,
      sym_string,
  [1129] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(150), 1,
      sym_type,
    ACTIONS(115), 2,
      sym_BOOLEAN,
      sym_INTEGER,
    STATE(32), 2,
      sym_variable_definition,
      aux_sym_body_repeat1,
    ACTIONS(113), 8,
      sym_IF,
      sym_WHILE,
      sym_GET,
      sym_PUT,
      sym_LEAVE,
      sym_RELAX,
      sym_CALL,
      sym_identifier,
  [1154] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(25), 1,
      sym_simple_expression,
    STATE(105), 1,
      sym_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1192] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    ACTIONS(120), 1,
      sym_ARRAY,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(25), 1,
      sym_simple_expression,
    STATE(76), 1,
      sym_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1230] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(25), 1,
      sym_simple_expression,
    STATE(107), 1,
      sym_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1268] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    ACTIONS(124), 1,
      sym_ARRAY,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(25), 1,
      sym_simple_expression,
    STATE(77), 1,
      sym_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1306] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(25), 1,
      sym_simple_expression,
    STATE(142), 1,
      sym_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1341] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(25), 1,
      sym_simple_expression,
    STATE(148), 1,
      sym_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1376] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(25), 1,
      sym_simple_expression,
    STATE(130), 1,
      sym_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1411] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(25), 1,
      sym_simple_expression,
    STATE(135), 1,
      sym_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1446] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(25), 1,
      sym_simple_expression,
    STATE(136), 1,
      sym_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1481] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(151), 1,
      sym_simple_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1513] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(145), 1,
      sym_simple_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1545] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(71), 1,
      sym_simple_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1577] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(137), 1,
      sym_simple_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 10,
      sym_IF,
      sym_WHILE,
      sym_GET,
      sym_PUT,
      sym_LEAVE,
      sym_RELAX,
      sym_CALL,
      sym_BOOLEAN,
      sym_INTEGER,
      sym_identifier,
  [1625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 10,
      sym_IF,
      sym_WHILE,
      sym_GET,
      sym_PUT,
      sym_LEAVE,
      sym_RELAX,
      sym_CALL,
      sym_BOOLEAN,
      sym_INTEGER,
      sym_identifier,
  [1641] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(73), 1,
      sym_simple_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1673] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(5), 1,
      sym_factor,
    STATE(18), 1,
      sym_term,
    STATE(50), 1,
      sym_simple_expression,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_END,
      sym_THEN,
      sym_ELSE,
      sym_ELSIF,
      sym_DO,
  [1720] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(5), 1,
      sym_factor,
    STATE(19), 1,
      sym_term,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1746] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(5), 1,
      sym_factor,
    STATE(15), 1,
      sym_term,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1772] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(8), 1,
      sym_factor,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1795] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      sym_NOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(6), 1,
      sym_factor,
    ACTIONS(101), 2,
      sym_TRUE,
      sym_FALSE,
  [1818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 3,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_number,
    ACTIONS(134), 4,
      sym_TRUE,
      sym_FALSE,
      sym_NOT,
      sym_identifier,
  [1833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 2,
      anon_sym_LPAREN,
      sym_number,
    ACTIONS(138), 4,
      sym_TRUE,
      sym_FALSE,
      sym_NOT,
      sym_identifier,
  [1847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_output_statement_repeat1,
    ACTIONS(140), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [1863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_DOT,
    STATE(60), 1,
      aux_sym_output_statement_repeat1,
    ACTIONS(144), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [1879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_LPAREN,
      sym_number,
    ACTIONS(148), 4,
      sym_TRUE,
      sym_FALSE,
      sym_NOT,
      sym_identifier,
  [1893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DOT,
    STATE(60), 1,
      aux_sym_output_statement_repeat1,
    ACTIONS(150), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [1909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [1920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [1933] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_FUNCTION,
    ACTIONS(163), 1,
      sym_BEGIN,
    STATE(158), 1,
      sym_body,
    STATE(68), 2,
      sym_function,
      aux_sym_source_repeat1,
  [1950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      aux_sym_statements_repeat1,
    ACTIONS(167), 3,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [1965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [1976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      aux_sym_statements_repeat1,
    ACTIONS(172), 3,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [1991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    STATE(64), 1,
      aux_sym_statements_repeat1,
    ACTIONS(174), 3,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2006] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_FUNCTION,
    ACTIONS(163), 1,
      sym_BEGIN,
    STATE(153), 1,
      sym_body,
    STATE(87), 2,
      sym_function,
      aux_sym_source_repeat1,
  [2023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2084] = 4,
    ACTIONS(188), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      aux_sym_string_repeat1,
    ACTIONS(192), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [2098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_ELSIF,
    STATE(79), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(200), 2,
      sym_END,
      sym_ELSE,
  [2142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2182] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_END,
    ACTIONS(213), 1,
      sym_ELSE,
    ACTIONS(215), 1,
      sym_ELSIF,
    STATE(79), 1,
      aux_sym_if_statement_repeat1,
  [2198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_FUNCTION,
    ACTIONS(224), 1,
      sym_BEGIN,
    STATE(87), 2,
      sym_function,
      aux_sym_source_repeat1,
  [2232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      sym_type,
    ACTIONS(230), 2,
      sym_BOOLEAN,
      sym_INTEGER,
  [2256] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_ELSIF,
    ACTIONS(232), 1,
      sym_END,
    ACTIONS(234), 1,
      sym_ELSE,
    STATE(84), 1,
      aux_sym_if_statement_repeat1,
  [2272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 4,
      anon_sym_SEMI,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2282] = 4,
    ACTIONS(188), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_string_repeat1,
    ACTIONS(240), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [2296] = 4,
    ACTIONS(188), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      aux_sym_string_repeat1,
    ACTIONS(244), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [2310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_call_statement_repeat1,
  [2323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_BEGIN,
    ACTIONS(251), 1,
      sym_TO,
    STATE(126), 1,
      sym_body,
  [2336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 3,
      ts_builtin_sym_end,
      sym_FUNCTION,
      sym_BEGIN,
  [2354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    STATE(101), 1,
      aux_sym_variable_definition_repeat1,
  [2367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 3,
      sym_END,
      sym_ELSE,
      sym_ELSIF,
  [2376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(123), 1,
      sym_type,
    ACTIONS(261), 2,
      sym_BOOLEAN,
      sym_INTEGER,
  [2387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      aux_sym_variable_definition_repeat1,
  [2400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_END,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    STATE(102), 1,
      aux_sym_statements_repeat1,
  [2413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 3,
      ts_builtin_sym_end,
      sym_FUNCTION,
      sym_BEGIN,
  [2422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_call_statement_repeat1,
  [2435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_call_statement_repeat1,
  [2448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_function_repeat1,
  [2461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_call_statement_repeat1,
  [2474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      aux_sym_variable_definition_repeat1,
  [2487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(129), 1,
      sym_type,
    ACTIONS(261), 2,
      sym_BOOLEAN,
      sym_INTEGER,
  [2498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(149), 1,
      sym_type,
    ACTIONS(230), 2,
      sym_BOOLEAN,
      sym_INTEGER,
  [2509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_BEGIN,
    ACTIONS(289), 1,
      sym_TO,
    STATE(125), 1,
      sym_body,
  [2522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_function_repeat1,
  [2535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_BEGIN,
    ACTIONS(295), 1,
      sym_TO,
    STATE(121), 1,
      sym_body,
  [2548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_call_statement_repeat1,
  [2561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(127), 1,
      sym_type,
    ACTIONS(261), 2,
      sym_BOOLEAN,
      sym_INTEGER,
  [2572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_END,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    STATE(102), 1,
      aux_sym_statements_repeat1,
  [2585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_function_repeat1,
  [2598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_END,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    STATE(116), 1,
      aux_sym_statements_repeat1,
  [2611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym_ARRAY,
    ACTIONS(305), 1,
      sym_identifier,
  [2621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_BEGIN,
    ACTIONS(309), 1,
      sym_ARRAY,
  [2631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 2,
      sym_FUNCTION,
      sym_BEGIN,
  [2639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 2,
      sym_FUNCTION,
      sym_BEGIN,
  [2647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_BEGIN,
    STATE(122), 1,
      sym_body,
  [2657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 2,
      sym_FUNCTION,
      sym_BEGIN,
  [2665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 2,
      sym_FUNCTION,
      sym_BEGIN,
  [2673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 2,
      sym_FUNCTION,
      sym_BEGIN,
  [2681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_BEGIN,
    STATE(125), 1,
      sym_body,
  [2691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_BEGIN,
    STATE(124), 1,
      sym_body,
  [2709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_LBRACK,
    ACTIONS(323), 1,
      anon_sym_COLON_EQ,
  [2727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_COLON_EQ,
  [2742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym_identifier,
  [2749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_THEN,
  [2756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_DO,
  [2763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
  [2770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_END,
  [2777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_identifier,
  [2784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_identifier,
  [2791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym_END,
  [2798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym_THEN,
  [2805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
  [2812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_identifier,
  [2819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
  [2826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_END,
  [2833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym_END,
  [2840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
  [2847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_identifier,
  [2854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_identifier,
  [2861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
  [2868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym_identifier,
  [2875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
  [2882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_identifier,
  [2889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_END,
  [2896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym_BEGIN,
  [2903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
  [2910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
  [2917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_identifier,
  [2924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 115,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 185,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 247,
  [SMALL_STATE(10)] = 278,
  [SMALL_STATE(11)] = 309,
  [SMALL_STATE(12)] = 340,
  [SMALL_STATE(13)] = 394,
  [SMALL_STATE(14)] = 448,
  [SMALL_STATE(15)] = 483,
  [SMALL_STATE(16)] = 518,
  [SMALL_STATE(17)] = 553,
  [SMALL_STATE(18)] = 588,
  [SMALL_STATE(19)] = 623,
  [SMALL_STATE(20)] = 650,
  [SMALL_STATE(21)] = 693,
  [SMALL_STATE(22)] = 736,
  [SMALL_STATE(23)] = 779,
  [SMALL_STATE(24)] = 822,
  [SMALL_STATE(25)] = 865,
  [SMALL_STATE(26)] = 893,
  [SMALL_STATE(27)] = 936,
  [SMALL_STATE(28)] = 973,
  [SMALL_STATE(29)] = 1010,
  [SMALL_STATE(30)] = 1049,
  [SMALL_STATE(31)] = 1090,
  [SMALL_STATE(32)] = 1129,
  [SMALL_STATE(33)] = 1154,
  [SMALL_STATE(34)] = 1192,
  [SMALL_STATE(35)] = 1230,
  [SMALL_STATE(36)] = 1268,
  [SMALL_STATE(37)] = 1306,
  [SMALL_STATE(38)] = 1341,
  [SMALL_STATE(39)] = 1376,
  [SMALL_STATE(40)] = 1411,
  [SMALL_STATE(41)] = 1446,
  [SMALL_STATE(42)] = 1481,
  [SMALL_STATE(43)] = 1513,
  [SMALL_STATE(44)] = 1545,
  [SMALL_STATE(45)] = 1577,
  [SMALL_STATE(46)] = 1609,
  [SMALL_STATE(47)] = 1625,
  [SMALL_STATE(48)] = 1641,
  [SMALL_STATE(49)] = 1673,
  [SMALL_STATE(50)] = 1705,
  [SMALL_STATE(51)] = 1720,
  [SMALL_STATE(52)] = 1746,
  [SMALL_STATE(53)] = 1772,
  [SMALL_STATE(54)] = 1795,
  [SMALL_STATE(55)] = 1818,
  [SMALL_STATE(56)] = 1833,
  [SMALL_STATE(57)] = 1847,
  [SMALL_STATE(58)] = 1863,
  [SMALL_STATE(59)] = 1879,
  [SMALL_STATE(60)] = 1893,
  [SMALL_STATE(61)] = 1909,
  [SMALL_STATE(62)] = 1920,
  [SMALL_STATE(63)] = 1933,
  [SMALL_STATE(64)] = 1950,
  [SMALL_STATE(65)] = 1965,
  [SMALL_STATE(66)] = 1976,
  [SMALL_STATE(67)] = 1991,
  [SMALL_STATE(68)] = 2006,
  [SMALL_STATE(69)] = 2023,
  [SMALL_STATE(70)] = 2034,
  [SMALL_STATE(71)] = 2044,
  [SMALL_STATE(72)] = 2054,
  [SMALL_STATE(73)] = 2064,
  [SMALL_STATE(74)] = 2074,
  [SMALL_STATE(75)] = 2084,
  [SMALL_STATE(76)] = 2098,
  [SMALL_STATE(77)] = 2108,
  [SMALL_STATE(78)] = 2118,
  [SMALL_STATE(79)] = 2128,
  [SMALL_STATE(80)] = 2142,
  [SMALL_STATE(81)] = 2152,
  [SMALL_STATE(82)] = 2162,
  [SMALL_STATE(83)] = 2172,
  [SMALL_STATE(84)] = 2182,
  [SMALL_STATE(85)] = 2198,
  [SMALL_STATE(86)] = 2208,
  [SMALL_STATE(87)] = 2218,
  [SMALL_STATE(88)] = 2232,
  [SMALL_STATE(89)] = 2242,
  [SMALL_STATE(90)] = 2256,
  [SMALL_STATE(91)] = 2272,
  [SMALL_STATE(92)] = 2282,
  [SMALL_STATE(93)] = 2296,
  [SMALL_STATE(94)] = 2310,
  [SMALL_STATE(95)] = 2323,
  [SMALL_STATE(96)] = 2336,
  [SMALL_STATE(97)] = 2345,
  [SMALL_STATE(98)] = 2354,
  [SMALL_STATE(99)] = 2367,
  [SMALL_STATE(100)] = 2376,
  [SMALL_STATE(101)] = 2387,
  [SMALL_STATE(102)] = 2400,
  [SMALL_STATE(103)] = 2413,
  [SMALL_STATE(104)] = 2422,
  [SMALL_STATE(105)] = 2435,
  [SMALL_STATE(106)] = 2448,
  [SMALL_STATE(107)] = 2461,
  [SMALL_STATE(108)] = 2474,
  [SMALL_STATE(109)] = 2487,
  [SMALL_STATE(110)] = 2498,
  [SMALL_STATE(111)] = 2509,
  [SMALL_STATE(112)] = 2522,
  [SMALL_STATE(113)] = 2535,
  [SMALL_STATE(114)] = 2548,
  [SMALL_STATE(115)] = 2561,
  [SMALL_STATE(116)] = 2572,
  [SMALL_STATE(117)] = 2585,
  [SMALL_STATE(118)] = 2598,
  [SMALL_STATE(119)] = 2611,
  [SMALL_STATE(120)] = 2621,
  [SMALL_STATE(121)] = 2631,
  [SMALL_STATE(122)] = 2639,
  [SMALL_STATE(123)] = 2647,
  [SMALL_STATE(124)] = 2657,
  [SMALL_STATE(125)] = 2665,
  [SMALL_STATE(126)] = 2673,
  [SMALL_STATE(127)] = 2681,
  [SMALL_STATE(128)] = 2691,
  [SMALL_STATE(129)] = 2699,
  [SMALL_STATE(130)] = 2709,
  [SMALL_STATE(131)] = 2717,
  [SMALL_STATE(132)] = 2727,
  [SMALL_STATE(133)] = 2735,
  [SMALL_STATE(134)] = 2742,
  [SMALL_STATE(135)] = 2749,
  [SMALL_STATE(136)] = 2756,
  [SMALL_STATE(137)] = 2763,
  [SMALL_STATE(138)] = 2770,
  [SMALL_STATE(139)] = 2777,
  [SMALL_STATE(140)] = 2784,
  [SMALL_STATE(141)] = 2791,
  [SMALL_STATE(142)] = 2798,
  [SMALL_STATE(143)] = 2805,
  [SMALL_STATE(144)] = 2812,
  [SMALL_STATE(145)] = 2819,
  [SMALL_STATE(146)] = 2826,
  [SMALL_STATE(147)] = 2833,
  [SMALL_STATE(148)] = 2840,
  [SMALL_STATE(149)] = 2847,
  [SMALL_STATE(150)] = 2854,
  [SMALL_STATE(151)] = 2861,
  [SMALL_STATE(152)] = 2868,
  [SMALL_STATE(153)] = 2875,
  [SMALL_STATE(154)] = 2882,
  [SMALL_STATE(155)] = 2889,
  [SMALL_STATE(156)] = 2896,
  [SMALL_STATE(157)] = 2903,
  [SMALL_STATE(158)] = 2910,
  [SMALL_STATE(159)] = 2917,
  [SMALL_STATE(160)] = 2924,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factor, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_factor, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(59),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factor, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_factor, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factor, 3),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_factor, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factor, 4),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_factor, 4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factor, 5),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_factor, 5),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_simple_expression_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_simple_expression_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_simple_expression_repeat1, 2), SHIFT_REPEAT(56),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leave_statement, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_leave_statement, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(119),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relational_operator, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relational_operator, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additive_operator, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additive_operator, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_statement, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_statement, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplicative_operator, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiplicative_operator, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_statement_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_statement_repeat1, 2), SHIFT_REPEAT(31),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_statement, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(28),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_statement, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_statement, 7),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_statement, 6),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_statement, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 6),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(40),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_statement, 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(159),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leave_statement, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(93),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(27),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2), SHIFT_REPEAT(39),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_statement_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(110),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2), SHIFT_REPEAT(140),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [375] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_alan() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
