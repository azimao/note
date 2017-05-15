/*
计算n 个值的和是，用循环for
答案是5050
如果要计算的值是从负数开始，例如：从-10开始
只需把for语句改为for（i=-10；i<=100；++i）
*/
# include <stdio.h>
int main(void)
{


	int i;
	int sum = 0;


	for(i=1; i<=100; ++i)
       sum = sum + i;
         
	printf("sum=%d\n", sum);

	return 0;

}