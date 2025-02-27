![image](https://github.com/user-attachments/assets/7ab29922-0716-4f3d-bba2-aa1a7ee33171)

# Hello, World - C Programming

This directory contains introductory exercises in C programming, focusing on basic compilation steps and standard output functions.

## Table of Contents

1. [Preprocessor](#preprocessor)
2. [Compiler](#compiler)
3. [Assembler](#assembler)
4. [Executable Name](#executable-name)
5. [Hello, puts](#hello-puts)
6. [Hello, printf](#hello-printf)
7. [Size of Data Types](#size-of-data-types)

---

## Preprocessor

**File:** `0-preprocessor`

This script runs a C file through the preprocessor and saves the output to another file.

- The C file name is stored in the variable `$CFILE`.
- The output is saved in the file `c`.

Usage:
```sh
export CFILE=main.c
./0-preprocessor
```

## Compiler

**File:** `1-compiler`

This script compiles a C file without linking.

- The C file name is stored in the variable `$CFILE`.
- The output file is named the same as the input file but with a `.o` extension.

Usage:
```sh
export CFILE=main.c
./1-compiler
```

## Assembler

**File:** `2-assembler`

This script generates the assembly code of a C file and saves it as an output file.

- The C file name is stored in the variable `$CFILE`.
- The output file is named the same as the input file but with a `.s` extension.

Usage:
```sh
export CFILE=main.c
./2-assembler
```

## Executable Name

**File:** `3-name`

This script compiles a C file and creates an executable named `cisfun`.

- The C file name is stored in the variable `$CFILE`.

Usage:
```sh
export CFILE=main.c
./3-name
```

## Hello, puts

**File:** `4-puts.c`

A simple C program that prints:

```
"Programming is like building a multilingual puzzle"
```

- Uses `puts`.
- Does not use `printf`.
- Returns `0`.

Compilation:
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o puts_program
./puts_program
```

## Hello, printf

**File:** `5-printf.c`

A simple C program that prints:

```
with proper grammar, but the outcome is a piece of art,
```

- Uses `printf`.
- Does not use `puts`.
- Returns `0`.
- Compiles without warnings using `-Wall`.

Compilation:
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c -o printf_program
./printf_program
```

## Size of Data Types

**File:** `6-size.c`

A C program that prints the size of various data types on the machine it is compiled and run on.

- Prints sizes of `char`, `int`, `long int`, `long long int`, and `float`.
- Returns `0`.

Compilation and execution:
```sh
gcc 6-size.c -o size_program
./size_program
```

For 32-bit and 64-bit architectures:
```sh
gcc 6-size.c -m32 -o size32
./size32

gcc 6-size.c -m64 -o size64
./size64
```
