#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{	
	int a = 10;
	int *ttr = &a;
	printf("%d \n",a);
	ft_ft(ttr);
	printf("%d \n", a);
}
