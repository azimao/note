# include <stdio.h>
//定义的是一个数据类型，并没有定义变量
enum WeekDay
{
	MonDay, TuesDay, WednesDay, ThursDay, FriDay, SaturDay, SunDay;
}

int main(void)
{
	enum WeekDay day = WednesDay;
	printf("%d\n", day);

	return 0;	
}

//输出的结果为   2     