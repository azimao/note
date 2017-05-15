/*
1到100之间的的奇数、奇数之和、奇数个数、平均数


1到100之间的的奇数最大值为99

如果要改为i<=100,则后面要改为if(i%2 == 1)
*/
#include <stdio.h>

int main(void)
{
	int i;
	int c=0;//个数一般用cnt表示
	int sum = 0;
	float avg;

	for(i=0;i<=99;++i)
	{
	
		    i=i+1;
			c=c+1;//++c
			sum=sum+i;

			printf("i=%d\n",i);		

	}
	avg = 1.0*sum/c;

	printf("c=%d\n",c);
	printf("sum=%d\n",sum);
	printf("avg=%f\n",avg);



	return 0;
}



