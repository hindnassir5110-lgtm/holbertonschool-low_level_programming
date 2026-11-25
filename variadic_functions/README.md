# C - Variadic functions

This project introduces variadic functions in C, which are functions
that accept a variable number of arguments.

## Learning objectives

- What variadic functions are
- How to use the `va_start`, `va_arg` and `va_end` macros
- Why and how to use the `const` type qualifier

## Requirements

- Editors: vi, vim, emacs
- Compiled on Ubuntu 20.04 LTS with gcc using the flags
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows the Betty style
- No global variables
- No more than 5 functions per file
- Allowed functions: `malloc`, `free`, `exit`, `_putchar`
- Allowed macros: `va_start`, `va_arg`, `va_end`

## Files

| File | Description |
|------|-------------|
| `variadic_functions.h` | Header file with all function prototypes |
| `0-sum_them_all.c` | Returns the sum of all its parameters |

## Compilation

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a

## Author

Hind
