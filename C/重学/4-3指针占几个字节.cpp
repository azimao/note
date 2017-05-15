# include <stdio.h>
int main(void)
{
	int i = 1;
	char ch = 'A';	
	double k = 5;

	int * p = &i;
	char * q = &ch;
	double * j = &k;

	printf("%d %d %d\n", sizeof(p), sizeof(q), sizeof(j));

	return 0;
}
