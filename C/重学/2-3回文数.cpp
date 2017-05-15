# include <stdio.h>
int main(void)
{
	int i, a;
	int sum = 0;
	scanf("%d", &i);

	a = i;
	while(a)
		{
			sum = sum*10 + a%10;
			a = a/10;
		}

	if(sum == i)
		printf("yes\n");
	else
		printf("no\n");

		return 0;
}

