//2014年6月10日17:44:49  

# include <stdio.h>

int main(void)
{
	int i = 5;
	int j = 108;
	int *p = &i;//等价于	int *p;  p = &i;
    int *q = &j;//等价于    int *q； q = &j;  

	int a[5];
	p = &a[1];//他们是数组a【5】连续空间里面的不同单元
	q = &a[4];//他们是数组a【5】连续空间里面的不同单元
	printf("p和q所指向的单元相隔%d个单元\n", q-p);

}