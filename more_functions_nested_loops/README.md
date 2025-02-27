![image](https://github.com/user-attachments/assets/7ab29922-0716-4f3d-bba2-aa1a7ee33171)

# More Functions & Nested Loops - C Programming

This directory contains exercises focused on implementing various functions and using nested loops in C. Each task reinforces fundamental concepts such as conditionals, loops, and basic I/O while emphasizing efficient coding practices.

---

## Table of Contents

1. [isupper](#isupper)
2. [isdigit](#isdigit)
3. [mul](#mul)
4. [print_numbers](#print_numbers)
5. [print_most_numbers](#print_most_numbers)
6. [more_numbers](#more_numbers)
7. [print_line](#print_line)
8. [print_diagonal](#print_diagonal)
9. [print_square](#print_square)
10. [Fizz-Buzz](#fizz-buzz)
11. [print_triangle](#print_triangle)
12. [prime_factor](#prime_factor)

---

## isupper

**File:** `0-isupper.c`

Write a function that checks for an uppercase character.

- **Prototype:** `int _isupper(int c);`
- **Behavior:** Returns `1` if `c` is uppercase; returns `0` otherwise.

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
./0-isuper
```
_Output:_
```
A: 1
a: 0
```

---

## isdigit

**File:** `1-isdigit.c`

Write a function that checks for a digit (0 through 9).

- **Prototype:** `int _isdigit(int c);`
- **Behavior:** Returns `1` if `c` is a digit; returns `0` otherwise.

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
./1-isdigit
```
_Output:_
```
0: 1
a: 0
```

---

## mul

**File:** `2-mul.c`

Write a function that multiplies two integers.

- **Prototype:** `int mul(int a, int b);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul
./2-mul
```
_Output:_
```
100352
-1646592
```

---

## print_numbers

**File:** `3-print_numbers.c`

Write a function that prints the numbers from 0 to 9, followed by a new line.  
*Constraints:* Use `_putchar` only twice in your code.

- **Prototype:** `void print_numbers(void);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
./3-print_numbers | cat -e
```
_Output:_
```
0123456789$
```

---

## print_most_numbers

**File:** `4-print_most_numbers.c`

Write a function that prints the numbers from 0 to 9, except 2 and 4, followed by a new line.  
*Constraints:* Use `_putchar` only twice.

- **Prototype:** `void print_most_numbers(void);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
./4-print_most_numbers
```
_Output:_
```
01356789
```

---

## more_numbers

**File:** `5-more_numbers.c`

Write a function that prints 10 times the numbers from 0 to 14, each followed by a new line.  
*Constraints:* Use `_putchar` only three times in your code.

- **Prototype:** `void more_numbers(void);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers
./5-more_numbers
```
_Output:_  
The numbers 0 to 14 printed 10 times.

---

## print_line

**File:** `6-print_line.c`

Write a function that draws a straight line in the terminal using the character `_`.

- **Behavior:** Prints the character `_` `n` times followed by a new line. If `n` is 0 or less, only a new line is printed.
- **Prototype:** `void print_line(int n);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-print_line.c -o 6-lines
./6-lines | cat -e
```
_Output:_
```
$
__$
__________$
$
```

---

## print_diagonal

**File:** `7-print_diagonal.c`

Write a function that draws a diagonal line on the terminal using the character `\`.

- **Behavior:** Prints a diagonal line composed of `n` instances of `\`, each on a new line in a shifted format. If `n` is 0 or less, only a new line is printed.
- **Prototype:** `void print_diagonal(int n);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
./7-diagonals | cat -e
```
_Output (formatted with visible spaces):_
```
$
\$
 \$
\$
...
```

---

## print_square

**File:** `8-print_square.c`

Write a function that prints a square using the character `#`.

- **Behavior:** The square’s side length is determined by `size`. If `size` is 0 or less, only a new line is printed.
- **Prototype:** `void print_square(int size);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-squares
./8-squares
```
_Output:_  
A square of `#` characters (e.g., 2x2, 10x10).

---

## Fizz-Buzz

**File:** `9-fizz_buzz.c`

Write a program that prints the numbers from 1 to 100, followed by a new line, with the following substitutions:

- For multiples of three: print **Fizz**.
- For multiples of five: print **Buzz**.
- For numbers which are multiples of both three and five: print **FizzBuzz**.

Each entry is separated by a space.

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz
./9-fizz_buzz
```
_Output:_
```
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz ... 
```

---

## print_triangle

**File:** `10-print_triangle.c`

Write a function that prints a triangle using the character `#`.

- **Behavior:** The triangle’s size is determined by `size`. If `size` is 0 or less, only a new line is printed.
- **Prototype:** `void print_triangle(int size);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles
./10-triangles
```
_Output:_  
A right-aligned triangle of `#` characters of various sizes.

---

## prime_factor 

**File:** `100-prime_factor.c`

Write a program that finds and prints the largest prime factor of the number `612852475143`, followed by a new line.

- **Compilation Note:** Use the math library.
- **Compilation Command:**
  ```sh
  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm
  ```
- **Usage Example:**
  ```sh
  ./100-prime_factor
  ```
  _Output:_ The largest prime factor of the number.
