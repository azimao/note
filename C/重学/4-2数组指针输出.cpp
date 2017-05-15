# include <stdio.h>

void f(int * pArr, int len)
{
	int i;
	for (i = 0; i < len; ++i)
	{
 		printf(" %d", pArr[i]);
	}
	printf("\n");
}

int main(void)
{
	int  a[6] = {1, 2, 5, 6, 8};
	f(a, 6);


	return 0;

}
