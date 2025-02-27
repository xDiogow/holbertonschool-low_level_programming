![image](https://github.com/user-attachments/assets/7ab29922-0716-4f3d-bba2-aa1a7ee33171)

# C - Variables, if, else, while

This project explores fundamental C programming concepts including variables, conditional statements (`if`/`else`), and loop structures (`while`). The exercises focus on working with random number generation, printing characters and numbers using limited functions, and understanding basic program flow control.

## Table of Contents
1. [Positive or Negative](#positive-or-negative)
2. [The Last Digit](#the-last-digit)
3. [The Alphabet Game](#the-alphabet-game)
4. [Alphabet](#alphabet)
5. [Alphabet Soup](#alphabet-soup)
6. [Numbers](#numbers)
7. [Numberz](#numberz)
8. [Smile in the Mirror](#smile-in-the-mirror)
9. [Hexadecimal](#hexadecimal)
10. [Combinations of Single-Digit Numbers](#combinations-of-single-digit-numbers)
11. [Two Digit Combinations](#two-digit-combinations)
12. [Three Digit Combinations](#three-digit-combinations)
13. [Two Two-Digit Numbers](#two-two-digit-numbers)

---

## Positive or Negative
**File:** `0-positive_or_negative.c`

This program assigns a random number to the variable `n` each time it's executed and prints whether the number is positive, negative, or zero.

- The variable `n` stores a different value every time the program runs
- The program determines if `n` is positive, negative, or zero and prints the result

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
./0-positive_or_negative
```

Sample Output:
```
-520693284 is negative
```

## The Last Digit
**File:** `1-last_digit.c`

This program assigns a random number to the variable `n` each time it's executed and prints the last digit of that number with additional information.

- The variable `n` stores a different value every time the program runs
- The program extracts and evaluates the last digit of `n`
- The output depends on whether the last digit is greater than 5, is 0, or is less than 6 and not 0

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
./1-last_digit
```

Sample Output:
```
Last digit of 629438752 is 2 and is less than 6 and not 0
```

## The Alphabet Game
**File:** `2-print_alphabet.c`

This program prints the lowercase alphabet followed by a new line, with specific restrictions.

- Uses only the `putchar` function (no `printf`, `puts`, etc.)
- Uses `putchar` only twice in the code
- All code must be in the `main` function

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
./2-print_alphabet
```

Sample Output:
```
abcdefghijklmnopqrstuvwxyz
```

## alphABET
**File:** `3-print_alphabets.c`

This program prints the alphabet in lowercase, and then in uppercase, followed by a new line.

- Uses only the `putchar` function (no `printf`, `puts`, etc.)
- Uses `putchar` only three times in the code
- All code must be in the `main` function

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
./3-print_alphabets
```

Sample Output:
```
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ
```

## Alphabet Soup
**File:** `4-print_alphabt.c`

This program prints the lowercase alphabet (excluding letters 'q' and 'e') followed by a new line.

- Uses only the `putchar` function (no `printf`, `puts`, etc.)
- Uses `putchar` only twice in the code
- All code must be in the `main` function

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
./4-print_alphabt
```

Sample Output:
```
abcdfghijklmnoprstuvwxyz
```

## Numbers
**File:** `5-print_numbers.c`

This program prints all single-digit numbers of base 10 starting from 0, followed by a new line.

- All code must be in the `main` function

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
./5-print_numbers
```

Sample Output:
```
0123456789
```

## Numberz
**File:** `6-print_numberz.c`

This program prints all single-digit numbers of base 10 starting from 0, with specific restrictions.

- No variables of type `char` allowed
- Uses only the `putchar` function (no `printf`, `puts`, etc.)
- Uses `putchar` only twice in the code
- All code must be in the `main` function

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
./6-print_numberz
```

Sample Output:
```
0123456789
```

## Smile in the Mirror
**File:** `7-print_tebahpla.c`

This program prints the lowercase alphabet in reverse, followed by a new line.

- Uses only the `putchar` function (no `printf`, `puts`, etc.)
- Uses `putchar` only twice in the code
- All code must be in the `main` function

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
./7-print_tebahpla
```

Sample Output:
```
zyxwvutsrqponmlkjihgfedcba
```

## Hexadecimal
**File:** `8-print_base16.c`

This program prints all the numbers of base 16 (hexadecimal) in lowercase, followed by a new line.

- Uses only the `putchar` function (no `printf`, `puts`, etc.)
- Uses `putchar` only three times in the code
- All code must be in the `main` function

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
./8-print_base16
```

Sample Output:
```
0123456789abcdef
```

## Combinations of Single-Digit Numbers
**File:** `9-print_comb.c`

This program prints all possible combinations of single-digit numbers.

- Numbers are separated by a comma followed by a space
- Numbers are printed in ascending order
- Uses only the `putchar` function (no `printf`, `puts`, etc.)
- Uses `putchar` a maximum of four times
- No variables of type `char` allowed
- All code must be in the `main` function

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
./9-print_comb
```

Sample Output:
```
0, 1, 2, 3, 4, 5, 6, 7, 8, 9
```

## Two Digit Combinations
**File:** `100-print_comb3.c`

This program prints all possible different combinations of two digits.

- Numbers must be separated by a comma followed by a space
- The two digits must be different
- Only the smallest combination of two digits is printed
- Numbers are printed in ascending order
- Uses only the `putchar` function (no `printf`, `puts`, etc.)
- Uses `putchar` a maximum of five times
- No variables of type `char` allowed
- All code must be in the `main` function

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
./100-print_comb3
```

Sample Output:
```
01, 02, 03, ..., 89
```

## Three Digit Combinations
**File:** `101-print_comb4.c`

This program prints all possible different combinations of three digits.

- Numbers must be separated by a comma followed by a space
- The three digits must be different
- Only the smallest combination of three digits is printed
- Numbers are printed in ascending order
- Uses only the `putchar` function (no `printf`, `puts`, etc.)
- Uses `putchar` a maximum of six times
- No variables of type `char` allowed
- All code must be in the `main` function

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
./101-print_comb4
```

Sample Output:
```
012, 013, 014, ..., 789
```

## Two Two-Digit Numbers
**File:** `102-print_comb5.c`

This program prints all possible combinations of two two-digit numbers.

- Numbers range from 0 to 99
- The two numbers are separated by a space
- All numbers are printed with two digits (1 is printed as 01)
- Combinations are separated by a comma followed by a space
- Combinations are printed in ascending order
- Uses only the `putchar` function (no `printf`, `puts`, etc.)
- Uses `putchar` a maximum of eight times
- No variables of type `char` allowed
- All code must be in the `main` function

Usage:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
./102-print_comb5
```

Sample Output:
```
00 01, 00 02, 00 03, ..., 98 99
```
