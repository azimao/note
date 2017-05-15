/*
2014年4月15日21:14:20
输出值为99.900002，因为浮点数不能准确存储。
*f（）里面可以是任何值,5为实参。。。。i为形参
因为函数是int型，所以输出是10

*/

# include <stdio.h>
int f(int i)
{
	return 10.5;
}
int main(void)
{
	float i = 99.9;
	printf("%f\n", i);
    i  = f(5);
	printf("%f\n", i);
	return 0;


}