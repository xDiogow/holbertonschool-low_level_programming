# Functions and Nested Loops

This directory contains C programming exercises focused on functions and nested loops, implementing various functionalities like character printing, alphabet manipulation, time display, and mathematical operations.

## Table of Contents
1. [_putchar](#_putchar)
2. [Print Alphabet](#print-alphabet)
3. [Print Alphabet x10](#print-alphabet-x10)
4. [islower](#islower)
5. [isalpha](#isalpha)
6. [Sign](#sign)
7. [Absolute Value](#absolute-value)
8. [Last Digit](#last-digit)
9. [Jack Bauer](#jack-bauer)
10. [Times Table](#times-table)
11. [Add](#add)
12. [Print to 98](#print-to-98)
13. [N Times Table](#n-times-table)
14. [Multiples of 3 and 5](#multiples-of-3-and-5)
15. [Fibonacci](#fibonacci)
16. [Even Fibonacci](#even-fibonacci)
17. [Fibonacci 98](#fibonacci-98)

---

## _putchar
**File:** `0-putchar.c`

A program that prints `_putchar`, followed by a new line.
- The program should return 0

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
./0-putchar
```

## Print Alphabet
**File:** `1-alphabet.c`

A function that prints the alphabet in lowercase, followed by a new line.
- Prototype: `void print_alphabet(void);`
- You can only use `_putchar` twice in your code

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
./1-alphabet
```

## Print Alphabet x10
**File:** `2-print_alphabet_x10.c`

A function that prints the alphabet in lowercase 10 times, followed by a new line.
- Prototype: `void print_alphabet_x10(void);`
- You can only use `_putchar` twice in your code

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
./2-alphabet_x10
```

## islower
**File:** `3-islower.c`

A function that checks for lowercase character.
- Prototype: `int _islower(int c);`
- Returns 1 if `c` is lowercase
- Returns 0 otherwise

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower
./3-islower
```

## isalpha
**File:** `4-isalpha.c`

A function that checks for alphabetic character.
- Prototype: `int _isalpha(int c);`
- Returns 1 if `c` is a letter, lowercase or uppercase
- Returns 0 otherwise

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha
./4-isalpha
```

## Sign
**File:** `5-sign.c`

A function that prints the sign of a number.
- Prototype: `int print_sign(int n);`
- Returns 1 and prints `+` if n is greater than zero
- Returns 0 and prints `0` if n is zero
- Returns -1 and prints `-` if n is less than zero

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign
./5-sign
```

## Absolute Value
**File:** `6-abs.c`

A function that computes the absolute value of an integer.
- Prototype: `int _abs(int);`

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-abs.c -o 6-abs
./6-abs
```

## Last Digit
**File:** `7-print_last_digit.c`

A function that prints the last digit of a number.
- Prototype: `int print_last_digit(int);`
- Returns the value of the last digit

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit
./7-last_digit
```

## Jack Bauer
**File:** `8-24_hours.c`

A function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
- Prototype: `void jack_bauer(void);`

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24
./8-24
```

## Times Table
**File:** `9-times_table.c`

A function that prints the 9 times table, starting with 0.
- Prototype: `void times_table(void);`

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table
./9-times_table
```

## Add
**File:** `10-add.c`

A function that adds two integers and returns the result.
- Prototype: `int add(int, int);`

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-add.c -o 10-add
./10-add
```

## Print to 98
**File:** `11-print_to_98.c`

A function that prints all natural numbers from n to 98, followed by a new line.
- Prototype: `void print_to_98(int n);`
- Numbers must be separated by a comma, followed by a space
- Numbers should be printed in order
- The first printed number should be the number passed to your function
- The last printed number should be 98
- You are allowed to use the standard library

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 11-main.c 11-print_to_98.c -o 11-98
./11-98
```

## N Times Table
**File:** `100-times_table.c`

A function that prints the n times table, starting with 0.
- Prototype: `void print_times_table(int n);`
- If n is greater than 15 or less than 0 the function should not print anything

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 100-main.c 100-times_table.c -o 100-times_table
./100-times_table
```

## Multiples of 3 and 5
**File:** `101-natural.c`

A program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
- You are allowed to use the standard library

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-natural.c -o 101-natural
./101-natural
```

## Fibonacci
**File:** `102-fibonacci.c`

A program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
- The numbers must be separated by comma, followed by a space
- You are allowed to use the standard library

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-fibonacci.c -o 102-fibonacci
./102-fibonacci
```

## Even Fibonacci
**File:** `103-fibonacci.c`

A program that finds and prints the sum of the even-valued terms in the Fibonacci sequence whose values do not exceed 4,000,000, followed by a new line.
- You are allowed to use the standard library

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-fibonacci.c -o 103-fibonacci
./103-fibonacci
```

## Fibonacci 98
**File:** `104-fibonacci.c`

A program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
- The numbers should be separated by comma, followed by a space
- You are allowed to use the standard library
- You are not allowed to use long long, malloc, pointers, arrays/tables, or structures
- You are not allowed to hard code any Fibonacci number (except for 1 and 2)

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 104-fibonacci.c -o 104-fibonacci
./104-fibonacci
```
