#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{	
	int a = 10;
	int b = 5;
	int *ttr = &a;
	int *ttrn = &b;
	printf("%d %d \n", a, b);
	ft_swap(ttr, ttrn);
	printf("%d %d \n", a, b);
}
