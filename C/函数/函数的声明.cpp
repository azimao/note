//在函数写在主函数下面时，一定要有函数声明，函数声明中void f(void)；  要加；   
# include <stdio.h>
void f(void);


int main(void)
{
	f();
	return 0;
}
void f(void)
{
	printf("哈哈\n");
}