/* (a) */
static char **lookup(int level);
/*
storage class	: static
type qualifiers	:
type specifiers	: char
declarators		: **lookup
initializers	:
*/

/* (b) */
volatile unsigned int io_flag;
/*
storage class	:
type qualifiers	: volatile
type specifiers	: unsigned int
declarators		: io_flag
initializers	:
*/

/* (c) */
extern char *file_name[MAX_FILES], path[];
/*
storage class	: extern
type qualifiers	:
type specifiers	: char
declarators		: *file_name[MAX_FILES], path[]
initializers	:
*/

/* (d) */
static const char token_buf[] = "";
/*
storage class	: static
type qualifiers	: const
type specifiers	: char
declarators		: token_buf[]
initializers	: ""
*/
