#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

void _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
long int _sqrt_recursion(long int n);
int is_prime_number(int n);
long int sqrt_helper(long int n, long int start, long int end);
int checkprime(int n, int m);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);


#endif 
