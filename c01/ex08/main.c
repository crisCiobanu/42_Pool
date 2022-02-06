#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{	
	int tab[4];
	tab[0] = 50;
	tab[1] = 2;
	tab[2] = -8;
	tab[3] = 0;
	ft_sort_int_tab(tab , 4);
	int i =0;
	while (i < 4)
	{
		printf("%d \n", tab[i]);
		i++;
	}
}
