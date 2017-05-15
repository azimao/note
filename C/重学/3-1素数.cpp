/*
     2015年7月11日16:40:32
	 for循环里面必须加if语句，负责for循环运行不起来。
*/
# include <stdio.h>
int main(void)
{
	int i, a;
	printf("请输入一个数:");
	scanf("%d", &a);

	for(i=2; i<a; ++i)
	{
		if(a%i == 0)
		break;
	}

	if(i == a)
		printf("%d是素数\n", a);
	else
		printf("%d不是素数\n", a);

	return 0;

}
    
