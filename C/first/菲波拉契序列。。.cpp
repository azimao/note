/*    2014年1月26日15:36:58

  菲波拉契序列：1,2,3,5,8,13,21,34
为什么f3没有赋初值？？
*/
# include <stdio.h>

int main(void)
{
	int n, i;
	int f1 = 1, f2 = 2, f3;
	printf("请输入你需要的序列：");
	scanf("%d", &n);

	
	if(1 == n)
	{
		f3 = 1;
	}
	else if(2 == n)
	{
		f3 = 2;
	}
    else
	{
		for(i=3;i<=n;++i)
		{
			f3 = f2 + f1;
			f1 = f2;
			f2 = f3;
		}
	}
	printf("%d\n", f3);
	return 0;
} 