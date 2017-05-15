//2014年4月20日11:54:24
# include <stdio.h>

int main(void)
{
	int * p;//p是变量的名字，int * 表示P变量存放的是int类型的地址
	int i = 3;
	int j;


	p = &i;//因为p只能存放int类型的变量地址，不能存放int型的值，所有要加取地址符
	j = *p;//*p就是代表i
	printf("j=%d", j);
	printf("*p=%d, *p");
	return 0;
}