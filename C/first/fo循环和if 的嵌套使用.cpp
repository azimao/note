/*
2014年1月22日22:11:00

求1到100中可以被3整除的数的和
思考怎样求所有1到100中可以被3整除的数的
在if语句下面改为
{
    sum=sum+i;
	printf("i=%d\n",i);
}

输出答案为sum=1683


*/
#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for(i=3;i<=12;++i)
	{
		if(i%3 == 0)
		  sum=sum+i;
		

	}

	printf("sum=%d\n",sum);


	return 0;
}