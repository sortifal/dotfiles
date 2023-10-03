#include <stddef.h>
#include <stdio.h>

int top_of_the_hill(int tab[], size_t len)
{
	int i = 0;
	int top = 0;
	while (i < len - 1 && tab[i] <= tab[i + 1])
	{
		if (tab[i] > tab[top])
		{
			top = i;
		}
		i++;
	}
	while (i < len - 1 && tab[i] >= tab[i + 1])
	{
		i++;
	}
	if(i != len - 1)
	{
		return -1;
	}
	return top;
}

int main(void)
{
	int tab1[] = { 1, 2, 3, 4, 6, 6, 4, 2, 0, 0 }; // Valid hill.
	printf("%d\n", top_of_the_hill(tab1, 10));
	int tab2[] = { 1, 2, 3, 4, 5, 6, 6, 6, 6, 6 }; // Valid hill.
	printf("%d\n", top_of_the_hill(tab2, 10));
	int tab3[] = { 1, 2, 3, 4, 6, 6, 4, 5, 0, 0 }; // Invalid hill.
	printf("%d\n", top_of_the_hill(tab3, 10));
	return 0;
}
