//2014年4月15日20:40:13
# include <stdio.h>
int max(int i, int j)
{
	if(i>j)
		return i;
	else
		return j;
}
int main(void)
{
	int a, b, c, d, e, f;
	a = 1, b = 3, c = 4, d = 6, e = 9, f = 100;
	printf("%d\n", max(a, b));
	printf("%d\n", max(c, d));
	printf("%d\n", max(e, f));

	return 0;

}