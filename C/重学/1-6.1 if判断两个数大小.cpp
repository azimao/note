# include <stdio.h>
int main(void)
{
	int i, j;
	printf("�������һ������");
	scanf("%d", &i);
	printf("������ڶ�������");
	scanf("%d", &j);

	if (i > j)
	{
		printf("%d > %d\n", i, j);		
	}
	else
		printf("%d > %d\n", j, i);

	return 0;
}