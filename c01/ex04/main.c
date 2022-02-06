#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{	
	int a = 10;
	int b = 5;
	int *ttr = &a;
	int *ttrn = &b;
	printf("%d %d \n", a, b);
	ft_ultimate_div_mod(ttr, ttrn);
	printf("%d %d \n", a, b);
}
