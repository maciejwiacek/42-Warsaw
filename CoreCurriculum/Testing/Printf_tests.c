#include <stdarg.h>
#include <stdio.h>

void print_nums(char *str, ...)
{
	va_list args;
	va_start(args, str);
	printf("%s: ", str);
	char *x = va_arg(args, char *);
	while (*x != '\0')
	{
		printf("%s ", x);
		x = va_arg(args, char *);
	}
	va_end(args);
}

int main(void)
{
	print_nums("Test", "One", "Two", "Three", "Four");
}