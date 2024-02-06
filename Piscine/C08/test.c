#include <stdio.h>

void ft_swap (int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int a = 4;
	int b = 5;
	ft_swap(&a, &b);
	printf("%p", &a);

}