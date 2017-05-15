# include <stdio.h>
int main(void)
{
	int i, m;
	int f1 = 1, f2 = 2, f3;
	printf("请输入你需要的序列：");
	scanf("%d", &m);

	if(1 == m)
	{
		f3 = 1;
	}
	else if(2 == m)
	{
		f3 = 2;
	}
	else
	{
		for(i=3; i<=m; ++i)
		{
			f3 = f2 + f1;
			f1 = f2;
			f2 = f3;
		}
	}

	printf("%d\n", f3);

	return 0;

}
