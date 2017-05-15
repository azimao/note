/*
		2015年7月11日18:01:56
		函数最上面应该是最底层；

*/
# include <stdio.h>

bool IsPrime(int val)
{
	int i;
	for (i = 2; i < val; ++i)
	{
		if(val%i == 0)
			break;
	}

	if(i == val)
		return true;
	else
		return false;
}
//判断是否是素数
void TraverseVal(int n)
{
	int j;
	for (j = 2; j < n; ++j)
			{
				if(IsPrime(j))
					printf("%d\n", j);						

			}
}
//批量输出素数
int main(void)
{
	int v;
	scanf("%d", &v);
	TraverseVal(v);



	return 0;
}