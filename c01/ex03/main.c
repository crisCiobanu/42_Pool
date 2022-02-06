#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{	
	int a = 10;
	int b = 5;
	int div;
	int mod;
	int *ttr = &div;
	int *ttrn = &mod;
	printf("%d %d \n", div, mod);
	ft_div_mod(a, b, ttr, ttrn);
	printf("%d %d \n", div, mod);
}
