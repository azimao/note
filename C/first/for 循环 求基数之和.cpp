/*
��Ҫ��for���������ı仯��

����뿴ִ�еĴ�����printf��ע��
����֮����ظ���������ִ�д���

��i����ֵ������
*/
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for(i=1; i<=10; i+=2)
		sum = sum + i;

	printf("sum=%d\n", sum);     //printf("ִ�м���");

    //printf("i=%d\n", i);
	return 0;

}
