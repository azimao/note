# include <stdio.h>
int main (void)
{
	int i = 2;
	int h = 4;
	int t;

	t = i;
	i = h;
	h = t;

	printf("i=%d h=%d\n", i, h);

	return 0;



}