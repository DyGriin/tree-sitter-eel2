#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_function = 1,
  anon_sym_SEMI = 2,
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
  anon_sym_CARET = 40,
  anon_sym_QMARK = 41,
  anon_sym_COLON = 42,
  anon_sym_while = 43,
  anon_sym_LBRACK = 44,
  anon_sym_RBRACK = 45,
  sym_identifier = 46,
  sym_string_identifier = 47,
  sym_number = 48,
  sym_string = 49,
  sym_comment = 50,
  sym_program = 51,
  sym__top_level_statement = 52,
  sym_function_def = 53,
  sym__context_table = 54,
  sym_global_table = 55,
  sym_local_table = 56,
  sym_instance_table = 57,
  sym_parameter_list = 58,
  sym__statement = 59,
  sym__expression = 60,
  sym_assignment = 61,
  sym_unary = 62,
  sym_binary = 63,
  sym_conditional = 64,
  sym__rvalue_expr = 65,
  sym__lvalue_expr = 66,
  sym_parenthesized = 67,
  sym__inblock = 68,
  sym__more_inblock = 69,
  sym_function_call = 70,
  sym_argument_list = 71,
  sym_argument = 72,
  sym_while = 73,
  sym_index = 74,
  sym_chained_string = 75,
  aux_sym_program_repeat1 = 76,
  aux_sym_function_def_repeat1 = 77,
  aux_sym_parameter_list_repeat1 = 78,
  aux_sym__more_inblock_repeat1 = 79,
  aux_sym_argument_list_repeat1 = 80,
  aux_sym_chained_string_repeat1 = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_function] = "function",
  [anon_sym_SEMI] = ";",
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
  [anon_sym_function] = anon_sym_function,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 2},
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
    {field_cond, 0},
    {field_else, 3},
  [15] =
    {field_index, 2},
    {field_start, 0},
  [17] =
    {field_body, 3},
    {field_name, 1},
  [19] =
    {field_cond, 0},
    {field_else, 4},
    {field_then, 2},
  [22] =
    {field_body, 4},
    {field_name, 1},
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
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '&') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '0') ADVANCE(129);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == ']') ADVANCE(93);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'g') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(105);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '~') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(70);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(129);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == ']') ADVANCE(93);
      if (lookahead == 'w') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '&') ADVANCE(82);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == ']') ADVANCE(93);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == 'g') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '~') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(128);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '~') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(33);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(135);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 34:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(70);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(129);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'w') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
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
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(77);
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
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(118);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(115);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(135);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 39},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 39},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 2},
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
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 39},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 39},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
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
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [sym_program] = STATE(88),
    [sym__top_level_statement] = STATE(16),
    [sym_function_def] = STATE(16),
    [sym__statement] = STATE(16),
    [sym__expression] = STATE(49),
    [sym_assignment] = STATE(33),
    [sym_unary] = STATE(33),
    [sym_binary] = STATE(33),
    [sym_conditional] = STATE(33),
    [sym__rvalue_expr] = STATE(21),
    [sym__lvalue_expr] = STATE(8),
    [sym_parenthesized] = STATE(8),
    [sym_function_call] = STATE(8),
    [sym_while] = STATE(8),
    [sym_index] = STATE(8),
    [sym_chained_string] = STATE(21),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_function] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
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
    ACTIONS(25), 22,
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
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [50] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
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
    ACTIONS(31), 22,
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
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [100] = 3,
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
    ACTIONS(35), 23,
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
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [145] = 3,
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
    ACTIONS(39), 22,
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
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [189] = 3,
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
    ACTIONS(43), 22,
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
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [233] = 3,
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
    ACTIONS(47), 22,
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
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [277] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(55), 9,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_AMP_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(51), 13,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(57), 13,
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
  [325] = 3,
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
    ACTIONS(59), 22,
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
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 14,
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
    ACTIONS(63), 22,
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
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 14,
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
    ACTIONS(67), 22,
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
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [457] = 3,
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
    ACTIONS(71), 22,
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
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [501] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_chained_string_repeat1,
    ACTIONS(77), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(75), 19,
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
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [541] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_string,
    STATE(17), 1,
      aux_sym_chained_string_repeat1,
    ACTIONS(57), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(51), 19,
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
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [581] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      anon_sym_function,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_while,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(104), 1,
      sym_string_identifier,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(110), 1,
      sym_string,
    STATE(49), 1,
      sym__expression,
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(95), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(15), 4,
      sym__top_level_statement,
      sym_function_def,
      sym__statement,
      aux_sym_program_repeat1,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [643] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
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
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym__expression,
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(15), 4,
      sym__top_level_statement,
      sym_function_def,
      sym__statement,
      aux_sym_program_repeat1,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [705] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_chained_string_repeat1,
    ACTIONS(119), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(117), 19,
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
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [745] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      anon_sym_while,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(140), 1,
      sym_string_identifier,
    ACTIONS(143), 1,
      sym_number,
    ACTIONS(146), 1,
      sym_string,
    STATE(47), 1,
      sym__expression,
    STATE(18), 2,
      sym__statement,
      aux_sym__more_inblock_repeat1,
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(129), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(131), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [804] = 15,
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
    ACTIONS(149), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym__expression,
    STATE(18), 2,
      sym__statement,
      aux_sym__more_inblock_repeat1,
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(151), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [863] = 15,
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
    ACTIONS(153), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym__expression,
    STATE(19), 2,
      sym__statement,
      aux_sym__more_inblock_repeat1,
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(155), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(157), 18,
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
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [958] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_PLUS,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(177), 1,
      anon_sym_TILDE,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_CARET,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(169), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(171), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
    ACTIONS(163), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1013] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_CARET,
    ACTIONS(191), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(189), 14,
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
  [1056] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_PLUS,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(177), 1,
      anon_sym_TILDE,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_CARET,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(169), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(171), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
    ACTIONS(193), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1111] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_PLUS,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(177), 1,
      anon_sym_TILDE,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_CARET,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(169), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(171), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
    ACTIONS(195), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(197), 18,
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
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1199] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_PLUS,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(177), 1,
      anon_sym_TILDE,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_CARET,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(203), 1,
      anon_sym_COLON,
    ACTIONS(169), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(171), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
    ACTIONS(201), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(189), 18,
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
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_CARET,
    ACTIONS(191), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(189), 17,
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
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1324] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_CARET,
    ACTIONS(191), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(189), 16,
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
  [1361] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_PLUS,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(177), 1,
      anon_sym_TILDE,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_CARET,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      sym__more_inblock,
    ACTIONS(169), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(207), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(171), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
  [1420] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_CARET,
    ACTIONS(191), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(189), 16,
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
  [1459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(157), 18,
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
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1492] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_PLUS,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_CARET,
    ACTIONS(191), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(189), 13,
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
  [1537] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_PLUS,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(177), 1,
      anon_sym_TILDE,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_CARET,
    ACTIONS(175), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(191), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(189), 12,
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
  [1586] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_PLUS,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(177), 1,
      anon_sym_TILDE,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_CARET,
    ACTIONS(175), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(171), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
    ACTIONS(189), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1637] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_CARET,
    ACTIONS(191), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(189), 15,
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
  [1678] = 15,
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
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__expression,
    STATE(80), 1,
      sym__inblock,
    STATE(91), 1,
      sym_argument,
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [1734] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_PLUS,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(177), 1,
      anon_sym_TILDE,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_CARET,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    ACTIONS(169), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(151), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(171), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
  [1790] = 15,
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
      anon_sym_RPAREN,
    STATE(31), 1,
      sym__expression,
    STATE(77), 1,
      sym_argument,
    STATE(80), 1,
      sym__inblock,
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [1846] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_PLUS,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(177), 1,
      anon_sym_TILDE,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_CARET,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    ACTIONS(169), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(215), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(171), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
  [1902] = 14,
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
    STATE(80), 1,
      sym__inblock,
    STATE(85), 1,
      sym_argument,
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [1955] = 13,
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
    ACTIONS(217), 1,
      anon_sym_COLON,
    STATE(27), 1,
      sym__expression,
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2005] = 13,
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
    STATE(92), 1,
      sym__inblock,
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2055] = 12,
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
    STATE(37), 1,
      sym__expression,
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2102] = 12,
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
    STATE(32), 1,
      sym__expression,
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2149] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_PLUS,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(177), 1,
      anon_sym_TILDE,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_CARET,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    ACTIONS(169), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(171), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
  [2200] = 12,
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
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2247] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_PLUS,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(177), 1,
      anon_sym_TILDE,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_CARET,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(169), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(171), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
  [2298] = 12,
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
    STATE(24), 1,
      sym__expression,
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2345] = 12,
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
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2392] = 12,
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
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2439] = 12,
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
    STATE(35), 1,
      sym__expression,
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2486] = 12,
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
    STATE(34), 1,
      sym__expression,
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2533] = 12,
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
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2580] = 12,
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
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2627] = 12,
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
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2674] = 12,
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
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2721] = 12,
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
    STATE(30), 1,
      sym__expression,
    STATE(21), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(33), 4,
      sym_assignment,
      sym_unary,
      sym_binary,
      sym_conditional,
    STATE(8), 5,
      sym__lvalue_expr,
      sym_parenthesized,
      sym_function_call,
      sym_while,
      sym_index,
  [2768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 2,
      anon_sym_while,
      sym_identifier,
    ACTIONS(221), 11,
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
  [2789] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_global,
    ACTIONS(227), 1,
      anon_sym_globals,
    ACTIONS(231), 1,
      anon_sym_instance,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_parameter_list,
    ACTIONS(229), 2,
      anon_sym_local,
      anon_sym_static,
    STATE(63), 5,
      sym__context_table,
      sym_global_table,
      sym_local_table,
      sym_instance_table,
      aux_sym_function_def_repeat1,
  [2819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 3,
      anon_sym_function,
      anon_sym_while,
      sym_identifier,
    ACTIONS(221), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_string_identifier,
      sym_number,
      sym_string,
  [2839] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_global,
    ACTIONS(227), 1,
      anon_sym_globals,
    ACTIONS(231), 1,
      anon_sym_instance,
    STATE(87), 1,
      sym_parenthesized,
    ACTIONS(229), 2,
      anon_sym_local,
      anon_sym_static,
    STATE(68), 5,
      sym__context_table,
      sym_global_table,
      sym_local_table,
      sym_instance_table,
      aux_sym_function_def_repeat1,
  [2869] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_global,
    ACTIONS(227), 1,
      anon_sym_globals,
    ACTIONS(231), 1,
      anon_sym_instance,
    STATE(87), 1,
      sym_parenthesized,
    ACTIONS(229), 2,
      anon_sym_local,
      anon_sym_static,
    STATE(66), 5,
      sym__context_table,
      sym_global_table,
      sym_local_table,
      sym_instance_table,
      aux_sym_function_def_repeat1,
  [2899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 3,
      anon_sym_function,
      anon_sym_while,
      sym_identifier,
    ACTIONS(235), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_string_identifier,
      sym_number,
      sym_string,
  [2919] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_global,
    ACTIONS(227), 1,
      anon_sym_globals,
    ACTIONS(231), 1,
      anon_sym_instance,
    STATE(89), 1,
      sym_parenthesized,
    ACTIONS(229), 2,
      anon_sym_local,
      anon_sym_static,
    STATE(68), 5,
      sym__context_table,
      sym_global_table,
      sym_local_table,
      sym_instance_table,
      aux_sym_function_def_repeat1,
  [2949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_function,
      anon_sym_while,
      sym_identifier,
    ACTIONS(239), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_string_identifier,
      sym_number,
      sym_string,
  [2969] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_global,
    ACTIONS(246), 1,
      anon_sym_globals,
    ACTIONS(252), 1,
      anon_sym_instance,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 2,
      anon_sym_local,
      anon_sym_static,
    STATE(68), 5,
      sym__context_table,
      sym_global_table,
      sym_local_table,
      sym_instance_table,
      aux_sym_function_def_repeat1,
  [2996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_global,
    ACTIONS(259), 5,
      anon_sym_globals,
      anon_sym_local,
      anon_sym_static,
      anon_sym_instance,
      anon_sym_LPAREN,
  [3010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_global,
    ACTIONS(263), 5,
      anon_sym_globals,
      anon_sym_local,
      anon_sym_static,
      anon_sym_instance,
      anon_sym_LPAREN,
  [3024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_global,
    ACTIONS(267), 5,
      anon_sym_globals,
      anon_sym_local,
      anon_sym_static,
      anon_sym_instance,
      anon_sym_LPAREN,
  [3038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_global,
    ACTIONS(271), 5,
      anon_sym_globals,
      anon_sym_local,
      anon_sym_static,
      anon_sym_instance,
      anon_sym_LPAREN,
  [3052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_global,
    ACTIONS(275), 5,
      anon_sym_globals,
      anon_sym_local,
      anon_sym_static,
      anon_sym_instance,
      anon_sym_LPAREN,
  [3066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(277), 2,
      anon_sym_COMMA,
      sym_identifier,
  [3080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(282), 2,
      anon_sym_COMMA,
      sym_identifier,
  [3094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(286), 2,
      anon_sym_COMMA,
      sym_identifier,
  [3108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_argument_list_repeat1,
  [3121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_argument_list_repeat1,
  [3134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_argument_list_repeat1,
  [3165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_parameter_list,
  [3175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_parameter_list,
  [3185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_parameter_list,
  [3195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_parenthesized,
  [3213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_SEMI,
  [3220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
  [3227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_SEMI,
  [3234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_identifier,
  [3241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_RBRACK,
  [3248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 145,
  [SMALL_STATE(6)] = 189,
  [SMALL_STATE(7)] = 233,
  [SMALL_STATE(8)] = 277,
  [SMALL_STATE(9)] = 325,
  [SMALL_STATE(10)] = 369,
  [SMALL_STATE(11)] = 413,
  [SMALL_STATE(12)] = 457,
  [SMALL_STATE(13)] = 501,
  [SMALL_STATE(14)] = 541,
  [SMALL_STATE(15)] = 581,
  [SMALL_STATE(16)] = 643,
  [SMALL_STATE(17)] = 705,
  [SMALL_STATE(18)] = 745,
  [SMALL_STATE(19)] = 804,
  [SMALL_STATE(20)] = 863,
  [SMALL_STATE(21)] = 922,
  [SMALL_STATE(22)] = 958,
  [SMALL_STATE(23)] = 1013,
  [SMALL_STATE(24)] = 1056,
  [SMALL_STATE(25)] = 1111,
  [SMALL_STATE(26)] = 1166,
  [SMALL_STATE(27)] = 1199,
  [SMALL_STATE(28)] = 1256,
  [SMALL_STATE(29)] = 1289,
  [SMALL_STATE(30)] = 1324,
  [SMALL_STATE(31)] = 1361,
  [SMALL_STATE(32)] = 1420,
  [SMALL_STATE(33)] = 1459,
  [SMALL_STATE(34)] = 1492,
  [SMALL_STATE(35)] = 1537,
  [SMALL_STATE(36)] = 1586,
  [SMALL_STATE(37)] = 1637,
  [SMALL_STATE(38)] = 1678,
  [SMALL_STATE(39)] = 1734,
  [SMALL_STATE(40)] = 1790,
  [SMALL_STATE(41)] = 1846,
  [SMALL_STATE(42)] = 1902,
  [SMALL_STATE(43)] = 1955,
  [SMALL_STATE(44)] = 2005,
  [SMALL_STATE(45)] = 2055,
  [SMALL_STATE(46)] = 2102,
  [SMALL_STATE(47)] = 2149,
  [SMALL_STATE(48)] = 2200,
  [SMALL_STATE(49)] = 2247,
  [SMALL_STATE(50)] = 2298,
  [SMALL_STATE(51)] = 2345,
  [SMALL_STATE(52)] = 2392,
  [SMALL_STATE(53)] = 2439,
  [SMALL_STATE(54)] = 2486,
  [SMALL_STATE(55)] = 2533,
  [SMALL_STATE(56)] = 2580,
  [SMALL_STATE(57)] = 2627,
  [SMALL_STATE(58)] = 2674,
  [SMALL_STATE(59)] = 2721,
  [SMALL_STATE(60)] = 2768,
  [SMALL_STATE(61)] = 2789,
  [SMALL_STATE(62)] = 2819,
  [SMALL_STATE(63)] = 2839,
  [SMALL_STATE(64)] = 2869,
  [SMALL_STATE(65)] = 2899,
  [SMALL_STATE(66)] = 2919,
  [SMALL_STATE(67)] = 2949,
  [SMALL_STATE(68)] = 2969,
  [SMALL_STATE(69)] = 2996,
  [SMALL_STATE(70)] = 3010,
  [SMALL_STATE(71)] = 3024,
  [SMALL_STATE(72)] = 3038,
  [SMALL_STATE(73)] = 3052,
  [SMALL_STATE(74)] = 3066,
  [SMALL_STATE(75)] = 3080,
  [SMALL_STATE(76)] = 3094,
  [SMALL_STATE(77)] = 3108,
  [SMALL_STATE(78)] = 3121,
  [SMALL_STATE(79)] = 3134,
  [SMALL_STATE(80)] = 3143,
  [SMALL_STATE(81)] = 3152,
  [SMALL_STATE(82)] = 3165,
  [SMALL_STATE(83)] = 3175,
  [SMALL_STATE(84)] = 3185,
  [SMALL_STATE(85)] = 3195,
  [SMALL_STATE(86)] = 3203,
  [SMALL_STATE(87)] = 3213,
  [SMALL_STATE(88)] = 3220,
  [SMALL_STATE(89)] = 3227,
  [SMALL_STATE(90)] = 3234,
  [SMALL_STATE(91)] = 3241,
  [SMALL_STATE(92)] = 3248,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lvalue_expr, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lvalue_expr, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 2, .production_id = 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 2, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4, .production_id = 9),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 4, .production_id = 9),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 3, .production_id = 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 3, .production_id = 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rvalue_expr, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rvalue_expr, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3, .production_id = 7),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3, .production_id = 7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chained_string_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chained_string_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(13),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(90),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(86),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chained_string, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chained_string, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(18),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(44),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(48),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(86),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(8),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(21),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(14),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__more_inblock, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__more_inblock, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4, .production_id = 8),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 5),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, .production_id = 5),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5, .production_id = 11),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3, .production_id = 6),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inblock, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__more_inblock, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 5, .production_id = 10),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 5, .production_id = 10),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 6, .production_id = 12),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 6, .production_id = 12),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_def_repeat1, 2), SHIFT_REPEAT(84),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2), SHIFT_REPEAT(84),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2), SHIFT_REPEAT(83),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2), SHIFT_REPEAT(82),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_table, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_table, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_table, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_table, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_table, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_table, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(74),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inblock, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(42),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [307] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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
