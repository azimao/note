/*
2014��1��22��22:11:00

��1��100�п��Ա�3���������ĺ�
˼������������1��100�п��Ա�3����������
��if��������Ϊ
{
    sum=sum+i;
	printf("i=%d\n",i);
}

�����Ϊsum=1683


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