/*
     2014年6月9日14:31:00


*/
# include <stdio.h>
int main(void)
{
	int * p;
	int i;
	i = 11;

	p = &i;//不能写成&i = p 、*p = i。
    *p =10;//*p可以改变i的值，i改变不了*p的值。

	printf("i = %d\n", i);
	return 0;

}
