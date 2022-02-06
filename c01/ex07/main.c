#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{	
	int tab[4];
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	ft_rev_int_tab(tab , 4);
	int i =0;
	while (i < 4)
	{
		printf("%d \n", tab[i]);
		i++;
	}
}
