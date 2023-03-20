#include <stdio.h>
/**
 * main - A program that prints the size of computer type
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu bytte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %lu bytte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu bytte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu bytte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu bytte(s)\n", (unsigned long)sizeof(f));
return (0);
}
