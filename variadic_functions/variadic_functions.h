#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stddef.h> /* for NULL */
#include <stdio.h>  /* for printf */

void print_strings(const char *separator, const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */
