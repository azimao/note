/*

2014��1��23��10:55

��i��������͵�ʱ��
iҪ����ǿ����ת����sum = sum + 1.0/i;���� sum=sum+1/��float����i��

i���ܶ���ɸ����ͣ�����������һ������ֵ�ķ�ʽ�洢������ѭ���еĸ��±������ܶ���ɸ�����

*/
# include <stdio.h>

int main(void)
{
	int i;
	float sum = 0;

	for(i=1;i<=100;++i)
	{
		sum = sum + 1.0/i;
	}
    
	printf("sum=%f\n", sum);
	return 0;
}