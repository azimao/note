/**
*2014年4月10日23:56:31
*不明白为什么是a[7],而不是a[6]
**/
# include <stdio.h>

int main(void)
{
	int a[7] = {1, 2, 3, 4, 5, 6, 7};
	int i,j;
	int t;

	i = 0;
	j = 6;
	while(i < j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;

		++i;
		--j;
	}
	for(i=0; i<7; ++i)
		printf("%d\n", a[i]);
	return 0;
}