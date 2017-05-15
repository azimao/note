# include <stdio.h>
int main(void)
{
	int i = 10, k = 20, m;
	m = (1>2) || (k=8);
	printf("m = %d, k = %d\n", m, k);
	return 0;
}
//使用或运算符时，当一边为真就为真  所以输出结果为   m=1 k=8