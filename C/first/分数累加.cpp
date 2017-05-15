/*

2014年1月23日10:55

当i定义成整型的时候
i要进行强制性转换：sum = sum + 1.0/i;或者 sum=sum+1/（float）（i）

i不能定义成浮点型，浮点型是以一个近似值的方式存储，所以循环中的跟新变量不能定义成浮点型

*/
# include <stdio.h>

int main(void)
{
	int i;
	float sum = 0;

	for(i=1;i<=100;++i)
	{
		sum = sum + 1.0/i;
	}
    
	printf("sum=%f\n", sum);
	return 0;
}