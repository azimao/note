# include <stdio.h>

bool IsPrime(int val)
{
	int i;
	for(i=2; i<val; ++i)
	{
		if(val%i == 0)
			break;
	}
	if(i == val)
		return true;
	else
		return false;
}

int main(void)
{
	
		int v;
		char ch;
	do
	{
		scanf("%d", &v); 
		

		if(IsPrime(v))
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}

		printf("¼ÌÐø£¨y/n?£©");
		scanf(" %c", &ch);
	}while('y' == ch || 'Y' == ch);

	return 0;

}