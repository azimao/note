/*
主要看for语句第三条的变化。

如果想看执行的次数看printf的注释
运行之后的重复次数就是执行次数

看i最后的值，见下
*/
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for(i=1; i<=10; i+=2)
		sum = sum + i;

	printf("sum=%d\n", sum);     //printf("执行几次");

    //printf("i=%d\n", i);
	return 0;

}
