# include <stdio.h>
int main(void)
{
	int i = 10, k = 20, m;
	m = (3>2) && (k=8);
	printf("m = %d, k = %d\n", m, k);
	return 0;
}
//  C语言中 0表示假，非0表示真，所以输出结果为 m=1,k=8