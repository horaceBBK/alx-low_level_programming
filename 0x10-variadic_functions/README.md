# Understanding C Variadic Functions

## Overview

Welcome to this README, where we explore the concept of variadic functions in C programming. Variadic functions provide a way to work with a variable number of arguments in a function, offering flexibility for handling different use cases.

## What are Variadic Functions?

In C, a variadic function is a function that can accept a variable number of arguments. The most common example is the `printf` function, which can accept a variable number of arguments based on the format string provided.

## Declaration and Syntax

The declaration of a variadic function includes an ellipsis (`...`) in the parameter list to indicate a variable number of arguments. The `stdarg.h` header provides macros and functions to handle variadic arguments.

```c
#include <stdarg.h>

int sum(int num, ...) {
    va_list args;
    va_start(args, num);

    int result = 0;
    for (int i = 0; i < num; ++i) {
        result += va_arg(args, int);
    }

    va_end(args);
    return result;
}
