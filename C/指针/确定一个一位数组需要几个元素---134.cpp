//  2014年6月9日17:29:40

# include <stdio.h>

void f(int * pArr, int len)
{
	int i;
	for(i=0; i<len; ++i)
	
		printf("%d ", *(pArr+i));  //pArr+i等价于pArr[i]
	printf("\n");
	

}

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	int b[7] = {-1, 1, -3, -9 , 4};
	int c[100] = {45, 65, 74, 43};

	f(a, 5);//a是 int *型
	f(b, 7);
	f(c, 100);

	return 0;
}