/*
     2015��7��11��16:40:32
	 forѭ����������if��䣬����forѭ�����в�������
*/
# include <stdio.h>
int main(void)
{
	int i, a;
	printf("������һ����:");
	scanf("%d", &a);

	for(i=2; i<a; ++i)
	{
		if(a%i == 0)
		break;
	}

	if(i == a)
		printf("%d������\n", a);
	else
		printf("%d��������\n", a);

	return 0;

}
    
