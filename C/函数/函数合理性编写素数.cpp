# include <stdio.h>


//判断是否是素数，是返回ture,不是返回fales
bool IsPrime(int m)
{
	int i;

	for (i=2; i<m; ++i)
	{
		if (0 == m%i)
			break;

	}
	if (i == m)
		return true;
	else
		return false;

}
//把一到n之间的所有素数在显示器上面输出
void TraverseVal(int n)
{
	int i;
	for (i=2; i<=n; ++i)
	{
		if (IsPrime(i))
			printf("%d\n", i);
	}
} 


int main(void)
{
	int val;
  

	scanf("%d", &val);
	TraverseVal(val);
	return 0;

}