/*
1��100֮��ĵ�����������֮�͡�����������ƽ����


1��100֮��ĵ��������ֵΪ99

���Ҫ��Ϊi<=100,�����Ҫ��Ϊif(i%2 == 1)
*/
#include <stdio.h>

int main(void)
{
	int i;
	int c=0;//����һ����cnt��ʾ
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



