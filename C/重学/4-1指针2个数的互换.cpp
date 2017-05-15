# include <stdio.h>

void db(int * p, int * q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
}

int main(void)
{
	int a = 2, b = 5;
	db(&a, &b);
	printf("%d %d\n", a, b);

	return 0;

}
