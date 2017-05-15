#include<stdio.h>
int main(void)
{
	int a,b,c,max;

	printf("please input three number:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	max=a;
	else
	max=b;
	if(max>c)
	printf("the max unmber is:%d",max);
	else
	printf("the max unmber is:%d",c);
}
