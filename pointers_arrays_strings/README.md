![image](https://github.com/user-attachments/assets/7ab29922-0716-4f3d-bba2-aa1a7ee33171)


# Pointers, Arrays & Strings - C Programming

This directory contains exercises focused on pointers, arrays, and string manipulation in C. The tasks range from simple pointer updates and swaps to complex string operations and advanced buffer manipulations, helping you strengthen your understanding of memory and string handling in C.

---

## Table of Contents

### Mandatory
1. [98 Battery st.](#98-battery-st)
2. [Don't swap horses in crossing a stream](#dont-swap-horses-in-crossing-a-stream)
3. [This report, by its very length, defends itself against the risk of being read](#this-report-by-its-very-length-defends-itself-against-the-risk-of-being-read)
4. [I do not fear computers. I fear the lack of them](#i-do-not-fear-computers-i-fear-the-lack-of-them)
5. [I can only go one way. I've not got a reverse gear](#i-can-only-go-one-way-ive-not-got-a-reverse-gear)
6. [A good engineer thinks in reverse…](#a-good-engineer-thinks-in-reverse)
7. [Half the lies they tell about me aren't true](#half-the-lies-they-tell-about-me-arent-true)
8. [Winning is only half of it. Having fun is the other half](#winning-is-only-half-of-it-having-fun-is-the-other-half)
9. [Arrays are not pointers](#arrays-are-not-pointers)
10. [strcpy](#strcpy)
11. [Great leaders sacrifice the people to save the numbers](#great-leaders-sacrifice-the-people-to-save-the-numbers)
12. [strcat](#strcat)
13. [strncat](#strncat)
14. [strncpy](#strncpy)
15. [strcmp](#strcmp)
16. [I am a kind of paranoid in reverse…](#i-am-a-kind-of-paranoid-in-reverse)
17. [Always look up](#always-look-up)
18. [Expect the best. Prepare for the worst. Capitalize on what comes](#expect-the-best-prepare-for-the-worst-capitalize-on-what-comes)
19. [Mozart composed his music not for the elite, but for everybody](#mozart-composed-his-music-not-for-the-elite-but-for-everybody)

### Advanced
20. [rot13](#rot13)
21. [Numbers have life; they're not just symbols on paper](#numbers-have-life-theyre-not-just-symbols-on-paper)
22. [A dream doesn't become reality through magic…](#a-dream-doesnt-become-reality-through-magic)
23. [It is the addition of strangeness to beauty…](#it-is-the-addition-of-strangeness-to-beauty)
24. [Noise is a buffer, more effective than cubicles or booth walls](#noise-is-a-buffer-more-effective-than-cubicles-or-booth-walls)

---

## Mandatory

### 98 Battery st.
**File:** `0-reset_to_98.c`

Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

- **Prototype:** `void reset_to_98(int *n);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
./0-98
```
_Expected output:_
```
n=402
n=98
```

---

### Don't swap horses in crossing a stream
**File:** `1-swap.c`

Write a function that swaps the values of two integers.

- **Prototype:** `void swap_int(int *a, int *b);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
./1-swap
```
_Expected output:_
```
a=98, b=42
a=42, b=98
```

---

### This report, by its very length, defends itself against the risk of being read
**File:** `2-strlen.c`

Write a function that returns the length of a string.

- **Prototype:** `int _strlen(char *s);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen
./2-strlen
```
_Expected output (for "My first strlen!"):_  
```
16
```

---

### I do not fear computers. I fear the lack of them
**File:** `3-puts.c`

Write a function that prints a string, followed by a new line, to stdout.

- **Prototype:** `void _puts(char *str);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts
./3-puts
```
_Expected output:_
```
I do not fear computers. I fear the lack of them - Isaac Asimov
```

---

### I can only go one way. I've not got a reverse gear
**File:** `4-print_rev.c`

Write a function that prints a string in reverse, followed by a new line.

- **Prototype:** `void print_rev(char *s);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
./4-print_rev
```
_Expected output:_  
The input string printed in reverse.

---

### A good engineer thinks in reverse
**File:** `5-rev_string.c`

Write a function that reverses a string.

- **Prototype:** `void rev_string(char *s);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string
./5-rev_string
```
_Expected output:_
```
My School
loohcS yM
```

---

### Half the lies they tell about me aren't true
**File:** `6-puts2.c`

Write a function that prints every other character of a string, starting with the first, followed by a new line.

- **Prototype:** `void puts2(char *str);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-puts2.c -o 6-puts2
./6-puts2
```
_Expected output (for "0123456789"):_
```
02468
```

---

### Winning is only half of it. Having fun is the other half
**File:** `7-puts_half.c`

Write a function that prints half of a string, followed by a new line.  
- If the number of characters is odd, print the last n characters where n = (length + 1) / 2.

- **Prototype:** `void puts_half(char *str);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
./7-puts_half
```
_Expected output (for "0123456789"):_
```
56789
```

---

### Arrays are not pointers
**File:** `8-print_array.c`

Write a function that prints n elements of an array of integers, separated by comma and space, followed by a new line.

- **Prototype:** `void print_array(int *a, int n);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array
./8-print_array
```
_Expected output (for sample array):_
```
98, 402, -198, 298, -1024
```

---

### strcpy
**File:** `9-strcpy.c`

Write a function that copies the string pointed to by `src` (including the terminating null byte) to the buffer pointed to by `dest`.

- **Prototype:** `char *_strcpy(char *dest, char *src);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy
./9-strcpy
```
_Expected output:_  
The string copied twice (once from `dest` and once via the returned pointer).

---

### Great leaders sacrifice the people to save the numbers
**File:** `100-atoi.c`

Write a function that converts a string to an integer.  
- Consider all the `-` and `+` signs preceding the number.
- Return 0 if no numbers are found.

- **Prototype:** `int _atoi(char *s);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
./100-atoi
```
_Expected output:_  
Various integers corresponding to the input strings.

---

### strcat
**File:** `0-strcat.c`

Write a function that concatenates two strings.  
- Overwrite the terminating null byte in `dest` and add a new one at the end.
- Return a pointer to the resulting string (`dest`).

- **Prototype:** `char *_strcat(char *dest, char *src);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
./0-strcat
```
_Expected output:_  
The concatenated strings printed multiple times.

---

### strncat
**File:** `1-strncat.c`

Write a function that concatenates two strings, using at most `n` bytes from `src`.

- **Prototype:** `char *_strncat(char *dest, char *src, int n);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strncat.c -o 1-strncat
./1-strncat
```
_Expected output:_  
A partially concatenated string, then a full concatenation when `n` exceeds `src` length.

---

### strncpy
**File:** `2-strncpy.c`

Write a function that copies a string up to `n` bytes, similar to the standard `strncpy`.

- **Prototype:** `char *_strncpy(char *dest, char *src, int n);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strncpy.c -o 2-strncpy
./2-strncpy
```
_Expected output:_  
The destination buffer updated with the copied string and its hexadecimal representation.

---

### strcmp
**File:** `3-strcmp.c`

Write a function that compares two strings.

- **Prototype:** `int _strcmp(char *s1, char *s2);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strcmp.c -o 3-strcmp
./3-strcmp
```
_Expected output:_  
An integer indicating the lexicographical difference between the strings.

---

### I am a kind of paranoid in reverse…
**File:** `4-rev_array.c`

Write a function that reverses the content of an array of integers.

- **Prototype:** `void reverse_array(int *a, int n);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-rev_array.c -o 4-rev_array
./4-rev_array
```
_Expected output:_  
The array printed before and after being reversed.

---

### Always look up
**File:** `5-string_toupper.c`

Write a function that changes all lowercase letters of a string to uppercase.

- **Prototype:** `char *string_toupper(char *);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-string_toupper.c -o 5-string_toupper
./5-string_toupper
```
_Expected output:_  
The input string converted to uppercase.

---

### Expect the best. Prepare for the worst. Capitalize on what comes
**File:** `6-cap_string.c`

Write a function that capitalizes all words of a string.  
- Words are separated by space, tabulation, newline, and various punctuation marks.

- **Prototype:** `char *cap_string(char *);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-cap_string.c -o 6-cap
./6-cap
```
_Expected output:_  
The input string with each word capitalized.

---

### Mozart composed his music not for the elite, but for everybody
**File:** `7-leet.c`

Write a function that encodes a string into 1337.  
- Replace: a/A → 4, e/E → 3, o/O → 0, t/T → 7, l/L → 1.
- **Constraints:** Use only one `if`, two loops, no switch or ternary operators.

- **Prototype:** `char *leet(char *);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 7-leet.c -o 7-1337
./7-1337
```
_Expected output:_  
The input string encoded in 1337.

---

## Advanced

### rot13
**File:** `100-rot13.c`

Write a function that encodes a string using ROT13.  
- **Constraints:** Use only one `if` statement and two loops; no switch or ternary operators.

- **Prototype:** `char *rot13(char *);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-rot13.c -o 100-rot13
./100-rot13
```
_Expected output:_  
The input string encoded in ROT13, with multiple invocations toggling between encoded and decoded forms.

---

### Numbers have life; they're not just symbols on paper
**File:** `101-print_number.c`

Write a function that prints an integer using only `_putchar`.  
- **Constraints:** No use of long, arrays, pointers, or hard-coded special values.

- **Prototype:** `void print_number(int n);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers
./101-print_numbers
```
_Expected output:_  
The integers printed (including negative numbers) each on a new line.

---

### A dream doesn't become reality through magic…
**File:** `102-magic.c`

Add one line to the provided code so that the program prints `a[2] = 98` followed by a new line.  
- **Constraints:** Do not use the variable `a` in your added line, do not modify variable `p`, and only write one statement at the specified location.

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-magic.c -o 102-magic
./102-magic
```
_Expected output:_  
```
a[2] = 98
```

---

### It is the addition of strangeness to beauty…
**File:** `103-infinite_add.c`

Write a function that adds two numbers represented as strings and stores the result in a buffer.

- **Prototype:** `char *infinite_add(char *n1, char *n2, char *r, int size_r);`
- **Note:** Return 0 if the result cannot be stored in the buffer.

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-main.c 103-infinite_add.c -o 103-add
./103-add
```
_Expected output:_  
The sum of two large numbers or an error if the buffer is too small.

---

### Noise is a buffer, more effective than cubicles or booth walls
**File:** `104-print_buffer.c`

Write a function that prints the content of a buffer.  
- **Details:**  
  - Print 10 bytes per line.
  - Each line starts with the position of the first byte (in hexadecimal, 8 characters).
  - Then print the hexadecimal content of the buffer (2 characters per byte, 2 bytes at a time, separated by a space).
  - Finally, print the printable characters (or a dot for non-printable ones).
  - If size is 0 or less, just print a newline.

- **Prototype:** `void print_buffer(char *b, int size);`

**Usage Example:**
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 104-main.c 104-print_buffer.c -o 104-buffer
./104-buffer
```
_Expected output:_  
A formatted dump of the buffer content similar to the provided example.

---

Happy coding!
