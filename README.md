*This project has been created as part of the 42 curriculum by icoman.*
# ft_printf - Custom Printf Implementation

## Description
**ft_printf** is the second project of the 42 curriculum. The goal is to recreate the `printf` function from the standard C library, handling various format conversions. This project deepens understanding of variadic functions, output formatting, and data type management.

The project requires implementing a function that handles different format specifiers, returning the total number of characters printed.

## Project Content

### Main Function
| Function | Description |
| :--- | :--- |
| `ft_printf` | Recreates the printf function with multiple conversion handling. |

### Implemented Conversions
The `ft_printf` function handles the following format specifiers:

| Specifier | Type | Description |
| :---: | :--- | :--- |
| `%c` | char | Prints a single character. |
| `%s` | string | Prints a string of characters. |
| `%p` | pointer | Prints a memory address in hexadecimal format. |
| `%d` | decimal | Prints a decimal number (base 10). |
| `%i` | integer | Prints an integer number (base 10). |
| `%u` | unsigned | Prints an unsigned decimal number. |
| `%x` | hex lowercase | Prints a number in lowercase hexadecimal. |
| `%X` | hex uppercase | Prints a number in uppercase hexadecimal. |
| `%%` | percent | Prints the percent symbol. |

### Helper Functions
| Function | Description |
| :--- | :--- |
| `put_str` | Handles string printing (including `NULL` case). |
| `put_hex` | Converts and prints numbers in hexadecimal format. |
| `put_ptr` | Handles printing of memory addresses. |
| `ptr_to_hex` | Converts memory addresses to hexadecimal format. |
| `put_nbr` | Handles printing of signed integers. |

---

## Instructions

### Requirements
* `gcc` compiler
* `make` (GNU Make)
* `libft` library (included in subfolder)

## Installation

To compile the project, clone the repository and run the Makefile:

```bash
cd ft_printf
make
```

This will generate the `libftprintf.a` static library file.

### Usage

Include `ft_printf.h` at the start of your `.c` files and link the library during compilation:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! You are %d years old.\n", "Mario", 25);
    ft_printf("Address: %p\n", &main);
    ft_printf("Hex: %x | HEX: %X\n", 255, 255);
    return (0);
}
```

Compile with:
```bash
gcc main.c libftprintf.a -o program
```

## Commands

- `make`: Compiles the project and creates `libftprintf.a`
- `make clean`: Removes object files (`.o`)
- `make fclean`: Removes object files and the `libftprintf.a` binary
- `make re`: Performs a full rebuild (`fclean` + `make`)

## Resources

- **Man pages**: `man 3 printf`, `man 3 stdarg`
- **GeeksforGeeks**: [Variadic Functions in C](https://www.geeksforgeeks.org/variadic-functions-in-c/)
- **Jacob Sorber**: [How to write C functions with variable argument lists.](https://youtu.be/S-ak715zIIE?si=Y5QoGWuYXvffpmgj)
- **AI**: Used for test case suggestions (edge cases) and debugging

---