# include <stdio.h>
int main(void)
{
	int i = 10, k = 20, m;
	m = (1>2) || (k=8);
	printf("m = %d, k = %d\n", m, k);
	return 0;
}
//ʹ�û������ʱ����һ��Ϊ���Ϊ��  ����������Ϊ   m=1 k=8