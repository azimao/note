/*         2014年1月26日14:58:03
为什么在输入的过程中要用m代替 val？？
*/
# include <stdio.h>

int main(void)
{
	int val, m;
    int sum = 0;
	printf("请输入一个数：");
	scanf("%d", &val);

	
	m = val;
	while(m)
	{
		sum = sum*10 + m%10;
		m/= 10;
	}
    
	if(sum == val)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}
/*
试数：
1）  m=1234
sum=0*10+1234%10=4
m=m/10=123
2)   m=123
sum=4*10+123%10=43
m=m/10=12
3)   m=12
sum=43*10+12%10=432
m/10=1
4)   m=1
sum=432*10+1%10=4321
m/10=0
*/