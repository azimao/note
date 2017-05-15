//被调用的函数应放在最前面，如果放在后面就必须要有函数声明
# include<stdio.h>
void f(void);
void g(void)
{
	printf("哈哈\n");
}
void f(void)
{
	g();

}
int main(void)
{
	f();
}