#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 2
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_SEMI = 1,
  anon_sym_global = 2,
  anon_sym_globals = 3,
  anon_sym_local = 4,
  anon_sym_static = 5,
  anon_sym_instance = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  anon_sym_EQ = 10,
  anon_sym_PLUS_EQ = 11,
  anon_sym_DASH_EQ = 12,
  anon_sym_STAR_EQ = 13,
  anon_sym_SLASH_EQ = 14,
  anon_sym_PERCENT_EQ = 15,
  anon_sym_CARET_EQ = 16,
  anon_sym_PIPE_EQ = 17,
  anon_sym_AMP_EQ = 18,
  anon_sym_TILDE_EQ = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  anon_sym_BANG = 22,
  anon_sym_AMP_AMP = 23,
  anon_sym_PIPE_PIPE = 24,
  anon_sym_LT = 25,
  anon_sym_GT = 26,
  anon_sym_LT_EQ = 27,
  anon_sym_GT_EQ = 28,
  anon_sym_EQ_EQ = 29,
  anon_sym_EQ_EQ_EQ = 30,
  anon_sym_BANG_EQ = 31,
  anon_sym_BANG_EQ_EQ = 32,
  anon_sym_AMP = 33,
  anon_sym_PIPE = 34,
  anon_sym_TILDE = 35,
  anon_sym_STAR = 36,
  anon_sym_SLASH = 37,
  anon_sym_PERCENT = 38,
  anon_sym_GT_GT = 39,
  anon_sym_LT_LT = 40,
  anon_sym_CARET = 41,
  anon_sym_QMARK = 42,
  anon_sym_COLON = 43,
  anon_sym_LBRACK = 44,
  anon_sym_RBRACK = 45,
  sym__identifier = 46,
  sym__function_word = 47,
  sym__while_word = 48,
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
  sym_identifier = 78,
  sym__identifier_from_keyword = 79,
  sym_chained_string = 80,
  aux_sym_program_repeat1 = 81,
  aux_sym_function_def_repeat1 = 82,
  aux_sym_parameter_list_repeat1 = 83,
  aux_sym__more_inblock_repeat1 = 84,
  aux_sym_argument_list_repeat1 = 85,
  aux_sym_chained_string_repeat1 = 86,
  anon_alias_sym_function = 87,
  anon_alias_sym_while = 88,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_CARET] = "^",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym__identifier] = "_identifier",
  [sym__function_word] = "_function_word",
  [sym__while_word] = "_while_word",
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
  [sym_identifier] = "identifier",
  [sym__identifier_from_keyword] = "_identifier_from_keyword",
  [sym_chained_string] = "chained_string",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_function_def_repeat1] = "function_def_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym__more_inblock_repeat1] = "_more_inblock_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_chained_string_repeat1] = "chained_string_repeat1",
  [anon_alias_sym_function] = "function",
  [anon_alias_sym_while] = "while",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__identifier] = sym__identifier,
  [sym__function_word] = sym__function_word,
  [sym__while_word] = sym__while_word,
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
  [sym_identifier] = sym_identifier,
  [sym__identifier_from_keyword] = sym__identifier_from_keyword,
  [sym_chained_string] = sym_chained_string,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_function_def_repeat1] = aux_sym_function_def_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym__more_inblock_repeat1] = aux_sym__more_inblock_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_chained_string_repeat1] = aux_sym_chained_string_repeat1,
  [anon_alias_sym_function] = anon_alias_sym_function,
  [anon_alias_sym_while] = anon_alias_sym_while,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__function_word] = {
    .visible = false,
    .named = true,
  },
  [sym__while_word] = {
    .visible = false,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier_from_keyword] = {
    .visible = false,
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
  [anon_alias_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_while] = {
    .visible = true,
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
  [2] = {
    [0] = anon_alias_sym_while,
  },
  [4] = {
    [0] = anon_alias_sym_while,
  },
  [8] = {
    [0] = anon_alias_sym_function,
  },
  [11] = {
    [0] = anon_alias_sym_function,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '%') ADVANCE(85);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '0') ADVANCE(130);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'g') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == 'w') ADVANCE(104);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '~') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(129);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '~') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(30);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(133);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 30:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(31);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 31:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 33:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 34:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 35:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 36:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(130);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'w') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '%') ADVANCE(85);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == 'g') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '~') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(85);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'w') ADVANCE(104);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '~') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_globals);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_globals);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(87);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '>') ADVANCE(86);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(70);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '|') ADVANCE(71);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(105);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(114);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__function_word);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__while_word);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_string_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(136);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 36},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 36},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 36},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 36},
  [46] = {.lex_state = 36},
  [47] = {.lex_state = 36},
  [48] = {.lex_state = 36},
  [49] = {.lex_state = 36},
  [50] = {.lex_state = 36},
  [51] = {.lex_state = 37},
  [52] = {.lex_state = 36},
  [53] = {.lex_state = 36},
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 36},
  [60] = {.lex_state = 36},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 36},
  [64] = {.lex_state = 37},
  [65] = {.lex_state = 37},
  [66] = {.lex_state = 37},
  [67] = {.lex_state = 37},
  [68] = {.lex_state = 36},
  [69] = {.lex_state = 37},
  [70] = {.lex_state = 36},
  [71] = {.lex_state = 36},
  [72] = {.lex_state = 36},
  [73] = {.lex_state = 37},
  [74] = {.lex_state = 37},
  [75] = {.lex_state = 37},
  [76] = {.lex_state = 37},
  [77] = {.lex_state = 37},
  [78] = {.lex_state = 36},
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
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [sym__function_word] = ACTIONS(1),
    [sym__while_word] = ACTIONS(1),
    [sym_string_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(96),
    [sym__top_level_statement] = STATE(17),
    [sym__top_level_last] = STATE(94),
    [sym_function_def] = STATE(89),
    [sym__statement] = STATE(17),
    [sym__expression] = STATE(51),
    [sym_assignment] = STATE(39),
    [sym_unary] = STATE(39),
    [sym_binary] = STATE(39),
    [sym_conditional] = STATE(39),
    [sym__rvalue_expr] = STATE(24),
    [sym__lvalue_expr] = STATE(11),
    [sym_parenthesized] = STATE(11),
    [sym_function_call] = STATE(11),
    [sym_while] = STATE(11),
    [sym_index] = STATE(11),
    [sym_identifier] = STATE(3),
    [sym__identifier_from_keyword] = STATE(2),
    [sym_chained_string] = STATE(24),
    [aux_sym_program_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(11),
    [sym__identifier] = ACTIONS(13),
    [sym__function_word] = ACTIONS(15),
    [sym__while_word] = ACTIONS(17),
    [sym_string_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_global] = ACTIONS(27),
    [anon_sym_globals] = ACTIONS(25),
    [anon_sym_local] = ACTIONS(25),
    [anon_sym_static] = ACTIONS(25),
    [anon_sym_instance] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PLUS_EQ] = ACTIONS(25),
    [anon_sym_DASH_EQ] = ACTIONS(25),
    [anon_sym_STAR_EQ] = ACTIONS(25),
    [anon_sym_SLASH_EQ] = ACTIONS(25),
    [anon_sym_PERCENT_EQ] = ACTIONS(25),
    [anon_sym_CARET_EQ] = ACTIONS(25),
    [anon_sym_PIPE_EQ] = ACTIONS(25),
    [anon_sym_AMP_EQ] = ACTIONS(25),
    [anon_sym_TILDE_EQ] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_AMP_AMP] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_argument_list,
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
    ACTIONS(29), 25,
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
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_parenthesized,
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
    ACTIONS(35), 25,
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
  [106] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(64), 1,
      sym_identifier,
    ACTIONS(13), 3,
      sym__identifier,
      sym__function_word,
      sym__while_word,
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
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
      anon_sym_LBRACK,
  [161] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_parenthesized,
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
  [214] = 3,
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
    ACTIONS(43), 26,
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
  [262] = 3,
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
  [309] = 3,
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
  [356] = 3,
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
  [403] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_EQ,
    ACTIONS(63), 9,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_AMP_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(65), 13,
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
    ACTIONS(59), 16,
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
  [454] = 3,
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
    ACTIONS(67), 25,
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
  [501] = 3,
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
  [548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 14,
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
    ACTIONS(75), 25,
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
  [595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 14,
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
    ACTIONS(79), 25,
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
  [642] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_string,
    STATE(16), 1,
      aux_sym_chained_string_repeat1,
    ACTIONS(85), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(83), 22,
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
  [685] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      sym__function_word,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(51), 1,
      sym__expression,
    STATE(89), 1,
      sym_function_def,
    STATE(91), 1,
      sym__top_level_last,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(23), 3,
      sym__top_level_statement,
      sym__statement,
      aux_sym_program_repeat1,
    STATE(39), 4,
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
  [758] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_string,
    STATE(19), 1,
      aux_sym_chained_string_repeat1,
    ACTIONS(65), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(59), 22,
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
  [801] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_string,
    STATE(16), 1,
      aux_sym_chained_string_repeat1,
    ACTIONS(98), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(96), 22,
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
  [844] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_SEMI,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      sym__while_word,
    ACTIONS(119), 1,
      sym_string_identifier,
    ACTIONS(122), 1,
      sym_number,
    ACTIONS(125), 1,
      sym_string,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(62), 1,
      sym__expression,
    ACTIONS(113), 2,
      sym__identifier,
      sym__function_word,
    STATE(20), 2,
      sym__statement,
      aux_sym__more_inblock_repeat1,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(108), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(110), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [910] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(128), 1,
      anon_sym_SEMI,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(43), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(20), 2,
      sym__statement,
      aux_sym__more_inblock_repeat1,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(130), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(39), 4,
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
  [976] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(132), 1,
      anon_sym_SEMI,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(44), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(21), 2,
      sym__statement,
      aux_sym__more_inblock_repeat1,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(134), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(39), 4,
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
  [1042] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      anon_sym_SEMI,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      sym__identifier,
    ACTIONS(150), 1,
      sym__function_word,
    ACTIONS(153), 1,
      sym__while_word,
    ACTIONS(156), 1,
      sym_string_identifier,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(162), 1,
      sym_string,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(62), 1,
      sym__expression,
    STATE(95), 1,
      sym_function_def,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(144), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(23), 3,
      sym__top_level_statement,
      sym__statement,
      aux_sym_program_repeat1,
    STATE(39), 4,
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
  [1112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(165), 21,
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
  [1151] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PLUS,
    ACTIONS(175), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_TILDE,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      anon_sym_QMARK,
    ACTIONS(177), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(191), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(181), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
    ACTIONS(171), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1209] = 3,
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
    ACTIONS(197), 21,
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
  [1245] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PLUS,
    ACTIONS(175), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_TILDE,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      anon_sym_QMARK,
    ACTIONS(203), 1,
      anon_sym_COLON,
    ACTIONS(177), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(191), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(181), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(205), 21,
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
  [1341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(207), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(205), 20,
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
  [1379] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(191), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(207), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(205), 17,
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
  [1419] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(191), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(207), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(205), 17,
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
  [1461] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PLUS,
    ACTIONS(175), 1,
      anon_sym_DASH,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(191), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(207), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(205), 14,
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
  [1509] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PLUS,
    ACTIONS(175), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_TILDE,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(183), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(191), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(207), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(205), 13,
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
  [1561] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PLUS,
    ACTIONS(175), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_TILDE,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(183), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(191), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(181), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
    ACTIONS(205), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1615] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(191), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(207), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(205), 16,
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
  [1659] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DASH,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(191), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(207), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(205), 15,
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
  [1705] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PLUS,
    ACTIONS(175), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_TILDE,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      anon_sym_QMARK,
    ACTIONS(177), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(191), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(181), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
    ACTIONS(209), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1763] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PLUS,
    ACTIONS(175), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_TILDE,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      anon_sym_QMARK,
    ACTIONS(177), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(191), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(181), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
    ACTIONS(211), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
    ACTIONS(165), 21,
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
  [1857] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(41), 1,
      sym__expression,
    STATE(81), 1,
      sym__inblock,
    STATE(93), 1,
      sym_argument,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [1920] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PLUS,
    ACTIONS(175), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_TILDE,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      anon_sym_QMARK,
    ACTIONS(215), 1,
      anon_sym_SEMI,
    STATE(82), 1,
      sym__more_inblock,
    ACTIONS(177), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(191), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(217), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(181), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
  [1981] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(41), 1,
      sym__expression,
    STATE(80), 1,
      sym_argument,
    STATE(81), 1,
      sym__inblock,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [2044] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PLUS,
    ACTIONS(175), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_TILDE,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      anon_sym_QMARK,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    ACTIONS(177), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(191), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(223), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(181), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
  [2102] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PLUS,
    ACTIONS(175), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_TILDE,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      anon_sym_QMARK,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    ACTIONS(177), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(130), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(191), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(181), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
  [2160] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(41), 1,
      sym__expression,
    STATE(81), 1,
      sym__inblock,
    STATE(90), 1,
      sym_argument,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [2220] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(41), 1,
      sym__expression,
    STATE(92), 1,
      sym__inblock,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [2277] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(225), 1,
      anon_sym_COLON,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(27), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [2334] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(26), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [2388] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(36), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [2442] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(37), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [2496] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PLUS,
    ACTIONS(175), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_TILDE,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      anon_sym_QMARK,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(191), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(181), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
  [2552] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(38), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [2606] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(35), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [2660] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(34), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [2714] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(28), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [2768] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(29), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [2822] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(30), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [2876] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(31), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [2930] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(32), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [2984] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(25), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [3038] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__while_word,
    ACTIONS(19), 1,
      sym_string_identifier,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    STATE(2), 1,
      sym__identifier_from_keyword,
    STATE(3), 1,
      sym_identifier,
    STATE(33), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__identifier,
      sym__function_word,
    STATE(24), 2,
      sym__rvalue_expr,
      sym_chained_string,
    ACTIONS(11), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 4,
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
  [3092] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PLUS,
    ACTIONS(175), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      anon_sym_TILDE,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      anon_sym_QMARK,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    ACTIONS(177), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(191), 3,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(181), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ,
  [3145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 3,
      sym__identifier,
      sym__function_word,
      sym__while_word,
    ACTIONS(229), 12,
      ts_builtin_sym_end,
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
  [3168] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_global,
    ACTIONS(235), 1,
      anon_sym_globals,
    ACTIONS(239), 1,
      anon_sym_instance,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_parameter_list,
    ACTIONS(237), 2,
      anon_sym_local,
      anon_sym_static,
    STATE(65), 5,
      sym__context_table,
      sym_global_table,
      sym_local_table,
      sym_instance_table,
      aux_sym_function_def_repeat1,
  [3198] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_global,
    ACTIONS(235), 1,
      anon_sym_globals,
    ACTIONS(239), 1,
      anon_sym_instance,
    STATE(87), 1,
      sym_parenthesized,
    ACTIONS(237), 2,
      anon_sym_local,
      anon_sym_static,
    STATE(69), 5,
      sym__context_table,
      sym_global_table,
      sym_local_table,
      sym_instance_table,
      aux_sym_function_def_repeat1,
  [3228] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_global,
    ACTIONS(235), 1,
      anon_sym_globals,
    ACTIONS(239), 1,
      anon_sym_instance,
    STATE(87), 1,
      sym_parenthesized,
    ACTIONS(237), 2,
      anon_sym_local,
      anon_sym_static,
    STATE(67), 5,
      sym__context_table,
      sym_global_table,
      sym_local_table,
      sym_instance_table,
      aux_sym_function_def_repeat1,
  [3258] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_global,
    ACTIONS(235), 1,
      anon_sym_globals,
    ACTIONS(239), 1,
      anon_sym_instance,
    STATE(88), 1,
      sym_parenthesized,
    ACTIONS(237), 2,
      anon_sym_local,
      anon_sym_static,
    STATE(69), 5,
      sym__context_table,
      sym_global_table,
      sym_local_table,
      sym_instance_table,
      aux_sym_function_def_repeat1,
  [3288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      sym__identifier,
      sym__function_word,
      sym__while_word,
    ACTIONS(243), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_string_identifier,
      sym_number,
      sym_string,
  [3308] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_global,
    ACTIONS(250), 1,
      anon_sym_globals,
    ACTIONS(256), 1,
      anon_sym_instance,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 2,
      anon_sym_local,
      anon_sym_static,
    STATE(69), 5,
      sym__context_table,
      sym_global_table,
      sym_local_table,
      sym_instance_table,
      aux_sym_function_def_repeat1,
  [3335] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym__identifier_from_keyword,
    STATE(70), 2,
      sym_identifier,
      aux_sym_parameter_list_repeat1,
    ACTIONS(266), 3,
      sym__identifier,
      sym__function_word,
      sym__while_word,
  [3357] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym__identifier_from_keyword,
    STATE(72), 2,
      sym_identifier,
      aux_sym_parameter_list_repeat1,
    ACTIONS(273), 3,
      sym__identifier,
      sym__function_word,
      sym__while_word,
  [3379] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym__identifier_from_keyword,
    STATE(70), 2,
      sym_identifier,
      aux_sym_parameter_list_repeat1,
    ACTIONS(273), 3,
      sym__identifier,
      sym__function_word,
      sym__while_word,
  [3401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_global,
    ACTIONS(281), 5,
      anon_sym_globals,
      anon_sym_local,
      anon_sym_static,
      anon_sym_instance,
      anon_sym_LPAREN,
  [3415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_global,
    ACTIONS(285), 5,
      anon_sym_globals,
      anon_sym_local,
      anon_sym_static,
      anon_sym_instance,
      anon_sym_LPAREN,
  [3429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_global,
    ACTIONS(289), 5,
      anon_sym_globals,
      anon_sym_local,
      anon_sym_static,
      anon_sym_instance,
      anon_sym_LPAREN,
  [3443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_global,
    ACTIONS(293), 5,
      anon_sym_globals,
      anon_sym_local,
      anon_sym_static,
      anon_sym_instance,
      anon_sym_LPAREN,
  [3457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_global,
    ACTIONS(297), 5,
      anon_sym_globals,
      anon_sym_local,
      anon_sym_static,
      anon_sym_instance,
      anon_sym_LPAREN,
  [3471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(27), 3,
      sym__identifier,
      sym__function_word,
      sym__while_word,
  [3484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_argument_list_repeat1,
  [3497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_argument_list_repeat1,
  [3510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_argument_list_repeat1,
  [3541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_parameter_list,
  [3551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_parameter_list,
  [3561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_parameter_list,
  [3571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [3579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [3587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 1,
      anon_sym_SEMI,
  [3597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
  [3612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
  [3619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
  [3626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
  [3633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SEMI,
  [3640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 106,
  [SMALL_STATE(6)] = 161,
  [SMALL_STATE(7)] = 214,
  [SMALL_STATE(8)] = 262,
  [SMALL_STATE(9)] = 309,
  [SMALL_STATE(10)] = 356,
  [SMALL_STATE(11)] = 403,
  [SMALL_STATE(12)] = 454,
  [SMALL_STATE(13)] = 501,
  [SMALL_STATE(14)] = 548,
  [SMALL_STATE(15)] = 595,
  [SMALL_STATE(16)] = 642,
  [SMALL_STATE(17)] = 685,
  [SMALL_STATE(18)] = 758,
  [SMALL_STATE(19)] = 801,
  [SMALL_STATE(20)] = 844,
  [SMALL_STATE(21)] = 910,
  [SMALL_STATE(22)] = 976,
  [SMALL_STATE(23)] = 1042,
  [SMALL_STATE(24)] = 1112,
  [SMALL_STATE(25)] = 1151,
  [SMALL_STATE(26)] = 1209,
  [SMALL_STATE(27)] = 1245,
  [SMALL_STATE(28)] = 1305,
  [SMALL_STATE(29)] = 1341,
  [SMALL_STATE(30)] = 1379,
  [SMALL_STATE(31)] = 1419,
  [SMALL_STATE(32)] = 1461,
  [SMALL_STATE(33)] = 1509,
  [SMALL_STATE(34)] = 1561,
  [SMALL_STATE(35)] = 1615,
  [SMALL_STATE(36)] = 1659,
  [SMALL_STATE(37)] = 1705,
  [SMALL_STATE(38)] = 1763,
  [SMALL_STATE(39)] = 1821,
  [SMALL_STATE(40)] = 1857,
  [SMALL_STATE(41)] = 1920,
  [SMALL_STATE(42)] = 1981,
  [SMALL_STATE(43)] = 2044,
  [SMALL_STATE(44)] = 2102,
  [SMALL_STATE(45)] = 2160,
  [SMALL_STATE(46)] = 2220,
  [SMALL_STATE(47)] = 2277,
  [SMALL_STATE(48)] = 2334,
  [SMALL_STATE(49)] = 2388,
  [SMALL_STATE(50)] = 2442,
  [SMALL_STATE(51)] = 2496,
  [SMALL_STATE(52)] = 2552,
  [SMALL_STATE(53)] = 2606,
  [SMALL_STATE(54)] = 2660,
  [SMALL_STATE(55)] = 2714,
  [SMALL_STATE(56)] = 2768,
  [SMALL_STATE(57)] = 2822,
  [SMALL_STATE(58)] = 2876,
  [SMALL_STATE(59)] = 2930,
  [SMALL_STATE(60)] = 2984,
  [SMALL_STATE(61)] = 3038,
  [SMALL_STATE(62)] = 3092,
  [SMALL_STATE(63)] = 3145,
  [SMALL_STATE(64)] = 3168,
  [SMALL_STATE(65)] = 3198,
  [SMALL_STATE(66)] = 3228,
  [SMALL_STATE(67)] = 3258,
  [SMALL_STATE(68)] = 3288,
  [SMALL_STATE(69)] = 3308,
  [SMALL_STATE(70)] = 3335,
  [SMALL_STATE(71)] = 3357,
  [SMALL_STATE(72)] = 3379,
  [SMALL_STATE(73)] = 3401,
  [SMALL_STATE(74)] = 3415,
  [SMALL_STATE(75)] = 3429,
  [SMALL_STATE(76)] = 3443,
  [SMALL_STATE(77)] = 3457,
  [SMALL_STATE(78)] = 3471,
  [SMALL_STATE(79)] = 3484,
  [SMALL_STATE(80)] = 3497,
  [SMALL_STATE(81)] = 3510,
  [SMALL_STATE(82)] = 3519,
  [SMALL_STATE(83)] = 3528,
  [SMALL_STATE(84)] = 3541,
  [SMALL_STATE(85)] = 3551,
  [SMALL_STATE(86)] = 3561,
  [SMALL_STATE(87)] = 3571,
  [SMALL_STATE(88)] = 3579,
  [SMALL_STATE(89)] = 3587,
  [SMALL_STATE(90)] = 3597,
  [SMALL_STATE(91)] = 3605,
  [SMALL_STATE(92)] = 3612,
  [SMALL_STATE(93)] = 3619,
  [SMALL_STATE(94)] = 3626,
  [SMALL_STATE(95)] = 3633,
  [SMALL_STATE(96)] = 3640,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lvalue_expr, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lvalue_expr, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 2, .production_id = 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 2, .production_id = 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_from_keyword, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_from_keyword, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3, .production_id = 7),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3, .production_id = 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rvalue_expr, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rvalue_expr, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4, .production_id = 10),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 4, .production_id = 10),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 3, .production_id = 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 3, .production_id = 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chained_string_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chained_string_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(16),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chained_string, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chained_string, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(20),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(46),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(48),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(2),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(6),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(11),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(24),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__more_inblock_repeat1, 2), SHIFT_REPEAT(18),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__more_inblock, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__more_inblock, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(46),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4, .production_id = 9),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3, .production_id = 6),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 5),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, .production_id = 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5, .production_id = 12),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inblock, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__more_inblock, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_last, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_statement, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__top_level_statement, 2),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_def_repeat1, 2), SHIFT_REPEAT(85),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2), SHIFT_REPEAT(85),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2), SHIFT_REPEAT(86),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2), SHIFT_REPEAT(84),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_def_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(70),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(78),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_table, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_table, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_table, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_table, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_table, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_table, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(45),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inblock, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 4, .production_id = 8),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 5, .production_id = 11),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [326] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
