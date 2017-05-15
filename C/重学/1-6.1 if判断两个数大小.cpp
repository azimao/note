# include <stdio.h>
int main(void)
{
	int i, j;
	printf("请输入第一个数：");
	scanf("%d", &i);
	printf("请输入第二个数：");
	scanf("%d", &j);

	if (i > j)
	{
		printf("%d > %d\n", i, j);		
	}
	else
		printf("%d > %d\n", j, i);

	return 0;
}