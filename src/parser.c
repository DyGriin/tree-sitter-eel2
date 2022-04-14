#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_SEMI = 1,
  anon_sym_function = 2,
  anon_sym_global = 3,
  anon_sym_globals = 4,
  anon_sym_local = 5,
  anon_sym_static = 6,
  anon_sym_instance = 7,
  anon_sym_LPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  anon_sym_EQ = 11,
  anon_sym_PLUS_EQ = 12,
  anon_sym_DASH_EQ = 13,
  anon_sym_STAR_EQ = 14,
  anon_sym_SLASH_EQ = 15,
  anon_sym_PERCENT_EQ = 16,
  anon_sym_CARET_EQ = 17,
  anon_sym_PIPE_EQ = 18,
  anon_sym_AMP_EQ = 19,
  anon_sym_TILDE_EQ = 20,
  anon_sym_PLUS = 21,
  anon_sym_DASH = 22,
  anon_sym_BANG = 23,
  anon_sym_AMP_AMP = 24,
  anon_sym_PIPE_PIPE = 25,
  anon_sym_LT = 26,
  anon_sym_GT = 27,
  anon_sym_LT_EQ = 28,
  anon_sym_GT_EQ = 29,
  anon_sym_EQ_EQ = 30,
  anon_sym_EQ_EQ_EQ = 31,
  anon_sym_BANG_EQ = 32,
  anon_sym_BANG_EQ_EQ = 33,
  anon_sym_AMP = 34,
  anon_sym_PIPE = 35,
  anon_sym_TILDE = 36,
  anon_sym_STAR = 37,
  anon_sym_SLASH = 38,
  anon_sym_PERCENT = 39,
  anon_sym_GT_GT = 40,
  anon_sym_LT_LT = 41,
  anon_sym_CARET = 42,
  anon_sym_QMARK = 43,
  anon_sym_COLON = 44,
  anon_sym_while = 45,
  anon_sym_LBRACK = 46,
  anon_sym_RBRACK = 47,
  sym_identifier = 48,
  sym_string_identifier = 49,
  sym_number = 50,
  sym_string = 51,
  sym_comment = 52,
  sym_program = 53,
  sym__top_level_statement = 54,
  sym__top_level_last = 55,
  sym_function_def = 56,
  sym__context_table = 57,
  sym_global_table = 58,
  sym_local_table = 59,
  sym_instance_table = 60,
  sym_parameter_list = 61,
  sym__statement = 62,
  sym__expression = 63,
  sym_assignment = 64,
  sym_unary = 65,
  sym_binary = 66,
  sym_conditional = 67,
  sym__rvalue_expr = 68,
  sym__lvalue_expr = 69,
  sym_parenthesized = 70,
  sym__inblock = 71,
  sym__more_inblock = 72,
  sym_function_call = 73,
  sym_argument_list = 74,
  sym_argument = 75,
  sym_while = 76,
  sym_index = 77,
  sym_chained_string = 78,
  aux_sym_program_repeat1 = 79,
  aux_sym_function_def_repeat1 = 80,
  aux_sym_parameter_list_repeat1 = 81,
  aux_sym__more_inblock_repeat1 = 82,
  aux_sym_argument_list_repeat1 = 83,
  aux_sym_chained_string_repeat1 = 84,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_function] = "function",
  [anon_sym_global] = "global",
  [anon_sym_globals] = "globals",
  [anon_sym_local] = "local",
  [anon_sym_static] = "static",
  [anon_sym_instance] = "instance",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_BANG_EQ_EQ] = "!==",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_TILDE] = "~",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_CARET] = "^",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [anon_sym_while] = "while",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_identifier] = "identifier",
  [sym_string_identifier] = "string_identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__top_level_statement] = "_top_level_statement",
  [sym__top_level_last] = "_top_level_last",
  [sym_function_def] = "function_def",
  [sym__context_table] = "_context_table",
  [sym_global_table] = "global_table",
  [sym_local_table] = "local_table",
  [sym_instance_table] = "instance_table",
  [sym_parameter_list] = "parameter_list",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_assignment] = "assignment",
  [sym_unary] = "unary",
  [sym_binary] = "binary",
  [sym_conditional] = "conditional",
  [sym__rvalue_expr] = "_rvalue_expr",
  [sym__lvalue_expr] = "_lvalue_expr",
  [sym_parenthesized] = "parenthesized",
  [sym__inblock] = "_inblock",
  [sym__more_inblock] = "_more_inblock",
  [sym_function_call] = "function_call",
  [sym_argument_list] = "argument_list",
  [sym_argument] = "argument",
  [sym_while] = "while",
  [sym_index] = "index",
  [sym_chained_string] = "chained_string",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_function_def_repeat1] = "function_def_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym__more_inblock_repeat1] = "_more_inblock_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_chained_string_repeat1] = "chained_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_globals] = anon_sym_globals,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_instance] = anon_sym_instance,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_BANG_EQ_EQ] = anon_sym_BANG_EQ_EQ,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_identifier] = sym_identifier,
  [sym_string_identifier] = sym_string_identifier,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym__top_level_statement] = sym__top_level_statement,
  [sym__top_level_last] = sym__top_level_last,
  [sym_function_def] = sym_function_def,
  [sym__context_table] = sym__context_table,
  [sym_global_table] = sym_global_table,
  [sym_local_table] = sym_local_table,
  [sym_instance_table] = sym_instance_table,
  [sym_parameter_list] = sym_parameter_list,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_assignment] = sym_assignment,
  [sym_unary] = sym_unary,
  [sym_binary] = sym_binary,
  [sym_conditional] = sym_conditional,
  [sym__rvalue_expr] = sym__rvalue_expr,
  [sym__lvalue_expr] = sym__lvalue_expr,
  [sym_parenthesized] = sym_parenthesized,
  [sym__inblock] = sym__inblock,
  [sym__more_inblock] = sym__more_inblock,
  [sym_function_call] = sym_function_call,
  [sym_argument_list] = sym_argument_list,
  [sym_argument] = sym_argument,
  [sym_while] = sym_while,
  [sym_index] = sym_index,
  [sym_chained_string] = sym_chained_string,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_function_def_repeat1] = aux_sym_function_def_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym__more_inblock_repeat1] = aux_sym__more_inblock_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_chained_string_repeat1] = aux_sym_chained_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_globals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instance] = {
    .visible = true,
    .named = false,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
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
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__top_level_last] = {
    .visible = false,
    .named = true,
  },
  [sym_function_def] = {
    .visible = true,
    .named = true,
  },
  [sym__context_table] = {
    .visible = false,
    .named = true,
  },
  [sym_global_table] = {
    .visible = true,
    .named = true,
  },
  [sym_local_table] = {
    .visible = true,
    .named = true,
  },
  [sym_instance_table] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_unary] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym__rvalue_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__lvalue_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized] = {
    .visible = true,
    .named = true,
  },
  [sym__inblock] = {
    .visible = false,
    .named = true,
  },
  [sym__more_inblock] = {
    .visible = false,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_chained_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__more_inblock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_chained_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_args = 1,
  field_body = 2,
  field_cond = 3,
  field_else = 4,
  field_index = 5,
  field_lhs = 6,
  field_name = 7,
  field_op = 8,
  field_rhs = 9,
  field_start = 10,
  field_then = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_body] = "body",
  [field_cond] = "cond",
  [field_else] = "else",
  [field_index] = "index",
  [field_lhs] = "lhs",
  [field_name] = "name",
  [field_op] = "op",
  [field_rhs] = "rhs",
  [field_start] = "start",
  [field_then] = "then",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 1},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 2},
  [12] = {.index = 21, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_op, 0},
    {field_rhs, 1},
  [2] =
    {field_body, 1},
  [3] =
    {field_args, 1},
    {field_name, 0},
  [5] =
    {field_body, 2},
    {field_cond, 1},
  [7] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
  [10] =
    {field_cond, 0},
    {field_then, 2},
  [12] =
    {field_start, 0},
  [13] =
    {field_body, 3},
    {field_name, 1},
  [15] =
    {field_cond, 0},
    {field_else, 3},
  [17] =
    {field_index, 2},
    {field_start, 0},
  [19] =
    {field_body, 4},
    {field_name, 1},
  [21] =
    {field_cond, 0},
    {field_else, 4},
    {field_then, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(71);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '&') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '0') ADVANCE(131);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == ']') ADVANCE(95);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'g') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(107);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '~') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(70);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(131);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == ']') ADVANCE(95);
      if (lookahead == 'w') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(130);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '~') ADVANCE(133);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(32);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(134);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(137);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(33);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 33:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 35:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 38:
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(70);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(131);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'w') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '&') ADVANCE(82);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == ']') ADVANCE(95);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == 'g') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '~') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_globals);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_globals);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(89);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '>') ADVANCE(88);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(72);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '|') ADVANCE(73);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_string_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(137);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 39},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 39},
  [8] = {.lex_state = 39},
  [9] = {.lex_state = 39},
  [10] = {.lex_state = 39},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 39},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 39},
  [15] = {.lex_state = 39},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 38},
  [18] = {.lex_state = 39},
  [19] = {.lex_state = 39},
  [20] = {.lex_state = 39},
  [21] = {.lex_state = 39},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 39},
  [25] = {.lex_state = 39},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 39},
  [28] = {.lex_state = 39},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 39},
  [31] = {.lex_state = 39},
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 39},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 39},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 39},
  [39] = {.lex_state = 39},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 39},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 39},
  [45] = {.lex_state = 39},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 38},
  [63] = {.lex_state = 39},
  [64] = {.lex_state = 39},
  [65] = {.lex_state = 38},
  [66] = {.lex_state = 39},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 39},
  [69] = {.lex_state = 39},
  [70] = {.lex_state = 39},
  [71] = {.lex_state = 39},
  [72] = {.lex_state = 39},
  [73] = {.lex_state = 39},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
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
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_globals] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_instance] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_string_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(96),
    [sym__top_level_statement] = STATE(17),
    [sym__top_level_last] = STATE(95),
    [sym_function_def] = STATE(88),
    [sym__statement] = STATE(17),
    [sym__expression] = STATE(41),
    [sym_assignment] = STATE(24),
    [sym_unary] = STATE(24),
    [sym_binary] = STATE(24),
    [sym_conditional] = STATE(24),
    [sym__rvalue_expr] = STATE(16),
    [sym__lvalue_expr] = STATE(11),
    [sym_parenthesized] = STATE(11),
    [sym_function_call] = STATE(11),
    [sym_while] = STATE(11),
    [sym_index] = STATE(11),
    [sym_chained_string] = STATE(16),
    [aux_sym_program_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_function] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_string_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_argument_list,
    ACTIONS(29), 14,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(25), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_AMP_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [53] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_parenthesized,
    ACTIONS(33), 14,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(31), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_AMP_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 14,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(35), 26,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_AMP_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 14,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(39), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_AMP_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 14,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(43), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_AMP_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 14,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(47), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_AMP_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 14,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(51), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_AMP_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 14,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(55), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_AMP_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 14,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(59), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_AMP_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [436] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(67), 9,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_AMP_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(69), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(63), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 14,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(71), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_AMP_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [534] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_string,
    STATE(15), 1,
      aux_sym_chained_string_repeat1,
    ACTIONS(69), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(63), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [577] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_string,
    STATE(14), 1,
      aux_sym_chained_string_repeat1,
    ACTIONS(79), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(77), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_string,
    STATE(14), 1,
      aux_sym_chained_string_repeat1,
    ACTIONS(86), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(84), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(90), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [702] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym__expression,
    STATE(88), 1,
      sym_function_def,
    STATE(90), 1,
      sym__top_level_last,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(32), 3,
      sym__top_level_statement,
      sym__statement,
      aux_sym_program_repeat1,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [769] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(114), 1,
      anon_sym_TILDE,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(124), 1,
      anon_sym_QMARK,
    ACTIONS(106), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(112), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(120), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(108), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(110), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
    ACTIONS(100), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(126), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(130), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [899] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(120), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(132), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(130), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [945] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(120), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(132), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(130), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [989] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(114), 1,
      anon_sym_TILDE,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(112), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(120), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(108), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(110), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
    ACTIONS(130), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(90), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1079] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(114), 1,
      anon_sym_TILDE,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(112), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(120), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(132), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(130), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1131] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(120), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(132), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(130), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1179] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(114), 1,
      anon_sym_TILDE,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(124), 1,
      anon_sym_QMARK,
    ACTIONS(106), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(112), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(120), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(108), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(110), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1237] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(120), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(132), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(130), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(120), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(132), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(130), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1319] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(114), 1,
      anon_sym_TILDE,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(124), 1,
      anon_sym_QMARK,
    ACTIONS(138), 1,
      anon_sym_COLON,
    ACTIONS(106), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(112), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(120), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(108), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(110), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
    ACTIONS(136), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1379] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(114), 1,
      anon_sym_TILDE,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(124), 1,
      anon_sym_QMARK,
    ACTIONS(106), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(112), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(120), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(108), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(110), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1437] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      anon_sym_SEMI,
    ACTIONS(147), 1,
      anon_sym_function,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_while,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym_string_identifier,
    ACTIONS(165), 1,
      sym_number,
    ACTIONS(168), 1,
      sym_string,
    STATE(44), 1,
      sym__expression,
    STATE(94), 1,
      sym_function_def,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(153), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(32), 3,
      sym__top_level_statement,
      sym__statement,
      aux_sym_program_repeat1,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [1501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(132), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(130), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1539] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(171), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym__expression,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    STATE(37), 2,
      sym__statement,
      aux_sym__more_inblock_repeat1,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(173), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [1598] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_while,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(192), 1,
      sym_string_identifier,
    ACTIONS(195), 1,
      sym_number,
    ACTIONS(198), 1,
      sym_string,
    STATE(45), 1,
      sym__expression,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    STATE(35), 2,
      sym__statement,
      aux_sym__more_inblock_repeat1,
    ACTIONS(181), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(183), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [1657] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(114), 1,
      anon_sym_TILDE,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(124), 1,
      anon_sym_QMARK,
    ACTIONS(201), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      sym__more_inblock,
    ACTIONS(106), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(112), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(120), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(203), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(108), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(110), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
  [1718] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym__expression,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    STATE(35), 2,
      sym__statement,
      aux_sym__more_inblock_repeat1,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(207), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [1777] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(114), 1,
      anon_sym_TILDE,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(124), 1,
      anon_sym_QMARK,
    ACTIONS(209), 1,
      anon_sym_SEMI,
    ACTIONS(106), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(112), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(120), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(207), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(108), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(110), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
  [1835] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(114), 1,
      anon_sym_TILDE,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(124), 1,
      anon_sym_QMARK,
    ACTIONS(209), 1,
      anon_sym_SEMI,
    ACTIONS(106), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(112), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(120), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(211), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(108), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(110), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
  [1893] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym__expression,
    STATE(80), 1,
      sym__inblock,
    STATE(91), 1,
      sym_argument,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [1949] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(114), 1,
      anon_sym_TILDE,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(124), 1,
      anon_sym_QMARK,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      anon_sym_SEMI,
    ACTIONS(106), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(112), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(120), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(108), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(110), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
  [2005] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym__expression,
    STATE(79), 1,
      sym_argument,
    STATE(80), 1,
      sym__inblock,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2061] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(36), 1,
      sym__expression,
    STATE(80), 1,
      sym__inblock,
    STATE(87), 1,
      sym_argument,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2114] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(114), 1,
      anon_sym_TILDE,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(124), 1,
      anon_sym_QMARK,
    ACTIONS(217), 1,
      anon_sym_SEMI,
    ACTIONS(106), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(112), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(120), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(108), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(110), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
  [2167] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(114), 1,
      anon_sym_TILDE,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(124), 1,
      anon_sym_QMARK,
    ACTIONS(209), 1,
      anon_sym_SEMI,
    ACTIONS(106), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(112), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(120), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(108), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(110), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
  [2220] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(221), 1,
      anon_sym_COLON,
    STATE(30), 1,
      sym__expression,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2270] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(36), 1,
      sym__expression,
    STATE(92), 1,
      sym__inblock,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2320] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(20), 1,
      sym__expression,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2367] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(26), 1,
      sym__expression,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2414] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(25), 1,
      sym__expression,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2461] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(23), 1,
      sym__expression,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2508] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(22), 1,
      sym__expression,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2555] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(21), 1,
      sym__expression,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2602] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(18), 1,
      sym__expression,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2649] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(27), 1,
      sym__expression,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2696] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(33), 1,
      sym__expression,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2743] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(29), 1,
      sym__expression,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2790] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(28), 1,
      sym__expression,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2837] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(19), 1,
      sym__expression,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2884] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(31), 1,
      sym__expression,
    STATE(16), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(24), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(11), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      anon_sym_while,
      sym_identifier,
    ACTIONS(223), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_RBRACK,
      sym_string_identifier,
      sym_number,
      sym_string,
  [2952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_function,
      anon_sym_while,
      sym_identifier,
    ACTIONS(227), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_string_identifier,
      sym_number,
      sym_string,
  [2972] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_global,
    ACTIONS(233), 1,
      anon_sym_globals,
    ACTIONS(237), 1,
      anon_sym_instance,
    STATE(86), 1,
      sym_parenthesized,
    ACTIONS(235), 2,
      anon_sym_local,
      anon_sym_static,
    STATE(68), 5,
      sym__context_table,
      sym_global_table,
      sym_local_table,
      sym_instance_table,
      aux_sym_function_def_repeat1,
  [3002] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_global,
    ACTIONS(233), 1,
      anon_sym_globals,
    ACTIONS(237), 1,
      anon_sym_instance,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_parameter_list,
    ACTIONS(235), 2,
      anon_sym_local,
      anon_sym_static,
    STATE(67), 5,
      sym__context_table,
      sym_global_table,
      sym_local_table,
      sym_instance_table,
      aux_sym_function_def_repeat1,
  [3032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 3,
      anon_sym_function,
      anon_sym_while,
      sym_identifier,
    ACTIONS(223), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_string_identifier,
      sym_number,
      sym_string,
  [3052] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_global,
    ACTIONS(233), 1,
      anon_sym_globals,
    ACTIONS(237), 1,
      anon_sym_instance,
    STATE(84), 1,
      sym_parenthesized,
    ACTIONS(235), 2,
      anon_sym_local,
      anon_sym_static,
    STATE(63), 5,
      sym__context_table,
      sym_global_table,
      sym_local_table,
      sym_instance_table,
      aux_sym_function_def_repeat1,
  [3082] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_global,
    ACTIONS(233), 1,
      anon_sym_globals,
    ACTIONS(237), 1,
      anon_sym_instance,
    STATE(84), 1,
      sym_parenthesized,
    ACTIONS(235), 2,
      anon_sym_local,
      anon_sym_static,
    STATE(68), 5,
      sym__context_table,
      sym_global_table,
      sym_local_table,
      sym_instance_table,
      aux_sym_function_def_repeat1,
  [3112] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_global,
    ACTIONS(244), 1,
      anon_sym_globals,
    ACTIONS(250), 1,
      anon_sym_instance,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 2,
      anon_sym_local,
      anon_sym_static,
    STATE(68), 5,
      sym__context_table,
      sym_global_table,
      sym_local_table,
      sym_instance_table,
      aux_sym_function_def_repeat1,
  [3139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_global,
    ACTIONS(257), 5,
      anon_sym_globals,
      anon_sym_local,
      anon_sym_static,
      anon_sym_instance,
      anon_sym_LPAREN,
  [3153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_global,
    ACTIONS(261), 5,
      anon_sym_globals,
      anon_sym_local,
      anon_sym_static,
      anon_sym_instance,
      anon_sym_LPAREN,
  [3167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_global,
    ACTIONS(265), 5,
      anon_sym_globals,
      anon_sym_local,
      anon_sym_static,
      anon_sym_instance,
      anon_sym_LPAREN,
  [3181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_global,
    ACTIONS(269), 5,
      anon_sym_globals,
      anon_sym_local,
      anon_sym_static,
      anon_sym_instance,
      anon_sym_LPAREN,
  [3195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_global,
    ACTIONS(273), 5,
      anon_sym_globals,
      anon_sym_local,
      anon_sym_static,
      anon_sym_instance,
      anon_sym_LPAREN,
  [3209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      sym_identifier,
  [3223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      sym_identifier,
  [3237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      sym_identifier,
  [3251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_argument_list_repeat1,
  [3264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_argument_list_repeat1,
  [3277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_argument_list_repeat1,
  [3290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      sym_parameter_list,
  [3318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_parameter_list,
  [3328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [3336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_parameter_list,
  [3346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [3354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(307), 1,
      anon_sym_SEMI,
  [3372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_parenthesized,
  [3382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
  [3389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
  [3396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
  [3403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym_identifier,
  [3410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_SEMI,
  [3417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
  [3424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 201,
  [SMALL_STATE(7)] = 248,
  [SMALL_STATE(8)] = 295,
  [SMALL_STATE(9)] = 342,
  [SMALL_STATE(10)] = 389,
  [SMALL_STATE(11)] = 436,
  [SMALL_STATE(12)] = 487,
  [SMALL_STATE(13)] = 534,
  [SMALL_STATE(14)] = 577,
  [SMALL_STATE(15)] = 620,
  [SMALL_STATE(16)] = 663,
  [SMALL_STATE(17)] = 702,
  [SMALL_STATE(18)] = 769,
  [SMALL_STATE(19)] = 827,
  [SMALL_STATE(20)] = 863,
  [SMALL_STATE(21)] = 899,
  [SMALL_STATE(22)] = 945,
  [SMALL_STATE(23)] = 989,
  [SMALL_STATE(24)] = 1043,
  [SMALL_STATE(25)] = 1079,
  [SMALL_STATE(26)] = 1131,
  [SMALL_STATE(27)] = 1179,
  [SMALL_STATE(28)] = 1237,
  [SMALL_STATE(29)] = 1279,
  [SMALL_STATE(30)] = 1319,
  [SMALL_STATE(31)] = 1379,
  [SMALL_STATE(32)] = 1437,
  [SMALL_STATE(33)] = 1501,
  [SMALL_STATE(34)] = 1539,
  [SMALL_STATE(35)] = 1598,
  [SMALL_STATE(36)] = 1657,
  [SMALL_STATE(37)] = 1718,
  [SMALL_STATE(38)] = 1777,
  [SMALL_STATE(39)] = 1835,
  [SMALL_STATE(40)] = 1893,
  [SMALL_STATE(41)] = 1949,
  [SMALL_STATE(42)] = 2005,
  [SMALL_STATE(43)] = 2061,
  [SMALL_STATE(44)] = 2114,
  [SMALL_STATE(45)] = 2167,
  [SMALL_STATE(46)] = 2220,
  [SMALL_STATE(47)] = 2270,
  [SMALL_STATE(48)] = 2320,
  [SMALL_STATE(49)] = 2367,
  [SMALL_STATE(50)] = 2414,
  [SMALL_STATE(51)] = 2461,
  [SMALL_STATE(52)] = 2508,
  [SMALL_STATE(53)] = 2555,
  [SMALL_STATE(54)] = 2602,
  [SMALL_STATE(55)] = 2649,
  [SMALL_STATE(56)] = 2696,
  [SMALL_STATE(57)] = 2743,
  [SMALL_STATE(58)] = 2790,
  [SMALL_STATE(59)] = 2837,
  [SMALL_STATE(60)] = 2884,
  [SMALL_STATE(61)] = 2931,
  [SMALL_STATE(62)] = 2952,
  [SMALL_STATE(63)] = 2972,
  [SMALL_STATE(64)] = 3002,
  [SMALL_STATE(65)] = 3032,
  [SMALL_STATE(66)] = 3052,
  [SMALL_STATE(67)] = 3082,
  [SMALL_STATE(68)] = 3112,
  [SMALL_STATE(69)] = 3139,
  [SMALL_STATE(70)] = 3153,
  [SMALL_STATE(71)] = 3167,
  [SMALL_STATE(72)] = 3181,
  [SMALL_STATE(73)] = 3195,
  [SMALL_STATE(74)] = 3209,
  [SMALL_STATE(75)] = 3223,
  [SMALL_STATE(76)] = 3237,
  [SMALL_STATE(77)] = 3251,
  [SMALL_STATE(78)] = 3264,
  [SMALL_STATE(79)] = 3277,
  [SMALL_STATE(80)] = 3290,
  [SMALL_STATE(81)] = 3299,
  [SMALL_STATE(82)] = 3308,
  [SMALL_STATE(83)] = 3318,
  [SMALL_STATE(84)] = 3328,
  [SMALL_STATE(85)] = 3336,
  [SMALL_STATE(86)] = 3346,
  [SMALL_STATE(87)] = 3354,
  [SMALL_STATE(88)] = 3362,
  [SMALL_STATE(89)] = 3372,
  [SMALL_STATE(90)] = 3382,
  [SMALL_STATE(91)] = 3389,
  [SMALL_STATE(92)] = 3396,
  [SMALL_STATE(93)] = 3403,
  [SMALL_STATE(94)] = 3410,
  [SMALL_STATE(95)] = 3417,
  [SMALL_STATE(96)] = 3424,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lvalue_expr, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lvalue_expr, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 2, .production_id = 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 2, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4, .production_id = 10),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 4, .production_id = 10),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3, .production_id = 7),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3, .production_id = 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 3, .production_id = 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 3, .production_id = 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rvalue_expr, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rvalue_expr, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chained_string_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chained_string_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(14),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chained_string, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chained_string, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5, .production_id = 12),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 5),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, .production_id = 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3, .production_id = 6),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4, .production_id = 9),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(93),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(47),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(89),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__more_inblock, 1),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(35),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(47),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(59),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(89),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(11),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(16),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(13),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inblock, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__more_inblock, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__more_inblock, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_last, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_statement, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__top_level_statement, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_def_repeat1, 2), SHIFT_REPEAT(83),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2), SHIFT_REPEAT(83),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2), SHIFT_REPEAT(85),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2), SHIFT_REPEAT(82),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_table, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_table, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_table, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_table, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_table, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_table, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(75),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(43),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inblock, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 4, .production_id = 8),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 5, .production_id = 11),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [317] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_eel(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
