# include <stdio.h>
int main(void)
{
	int i=0;
	int j=0;

	i = (j++, ++j, j+4, j-3);

	printf("%d %d\n", i, j);

}

// i=-1(j-3)     j=2 (j++,++j)

