/*
		2015��7��11��18:01:56
		����������Ӧ������ײ㣻

*/
# include <stdio.h>

bool IsPrime(int val)
{
	int i;
	for (i = 2; i < val; ++i)
	{
		if(val%i == 0)
			break;
	}

	if(i == val)
		return true;
	else
		return false;
}
//�ж��Ƿ�������
void TraverseVal(int n)
{
	int j;
	for (j = 2; j < n; ++j)
			{
				if(IsPrime(j))
					printf("%d\n", j);						

			}
}
//�����������
int main(void)
{
	int v;
	scanf("%d", &v);
	TraverseVal(v);



	return 0;
}