//2014年4月20日11:23:02

# include <stdio.h>

int k = 100;//全局变量
void f(void)
{
	printf("k = %d\n", k);
}

int main(void)
{
	int v = 2;//局部变量
	printf("v=%d\n", v);
		f();



	return 0;

}