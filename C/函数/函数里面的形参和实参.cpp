# include <stdio.h>
void f(int i,float j)
{
	printf("%d\n", i);
	printf("%f\n", j);
}
int main(void)
{
	f(5, 3.2);
	return 0;
}