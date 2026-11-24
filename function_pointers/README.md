# C - Function pointers

This project introduces function pointers in C: what they are,
what they hold, and how to use them.

## Learning Objectives

- What function pointers are and how to use them
- What a function pointer exactly holds
- Where a function pointer points to in virtual memory

## Requirements

- Allowed editors: vi, vim, emacs
- Compiled on Ubuntu 20.04 LTS with gcc using:
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows the Betty style
- No global variables
- No more than 5 functions per file
- Allowed standard library functions: `malloc`, `free`, `exit`
  (the standard library is allowed in task 3)
- All header files are include guarded

## Files

| File | Description |
|------|-------------|
| `function_pointers.h` | Header file with the prototypes of tasks 0, 1 and 2 |
| `0-print_name.c` | Prints a name using a function pointer |
| `1-array_iterator.c` | Executes a function on each element of an array |
| `2-int_index.c` | Searches for an integer using a comparison function |
| `3-calc.h` | Header file for the calc program |
| `3-op_functions.c` | Arithmetic operation functions (add, sub, mul, div, mod) |
| `3-get_op_func.c` | Selects the function matching an operator |
| `3-main.c` | Main function of the calc program |

## Compilation

Tasks 0, 1 and 2:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c
```

Task 3:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
```

## Usage (task 3)

```bash
./calc num1 operator num2
```

Supported operators: `+`, `-`, `*`, `/`, `%`

| Exit status | Meaning |
|-------------|---------|
| 98 | Wrong number of arguments |
| 99 | Invalid operator |
| 100 | Division or modulo by zero |

## Author

Hind
