# include <stdio.h>

bool IsPrime(int n)
{
	int i;
	for(i=2; i<=n; ++i)
	{
		if(0 == n%i)
		   break;

	}
	if(i == n)
		return true;
	else
		return false;

}
void TraverseVal(int m)
{
	int i;
	for(i=2; i<=m; ++i)
	{
	    if(IsPrime(i))
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