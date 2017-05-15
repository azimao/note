 //  2014年6月9日17:49:04
# include <stdio.h>

void f(int * pArr, int len)
{
	pArr[3] = 88;//pArr是一个指针变量，a同样是指针变量。。两个是等价的    所以pArr【3】等价于a【3】
}
int main(void)
{
	int a[6] = {1,2,3,4,5,6};
	 	printf("%d\n", a[3]);

	f(a, 6);
	printf("%d\n", a[3]);
//	printf("%d\n", &a[3]);   如果写入的是&a【3】输出的就是a【3】以十进制表示的地址


	return 0;
}