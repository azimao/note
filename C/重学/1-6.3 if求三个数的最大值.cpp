# include <stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	int t;
	scanf("%d %d %d", &a, &b, &c);

	if(a < b)
		{  
			t = a;
			a = b;
			b = t;
		}
	if(a < c)
		{
			t = a;
			a = c;
			c = t;
		}
	if(b < c)
		{
			t = b;
			b = c;
			c = t;
		}
	printf("这三个数从大到小依次为：%d %d %d\n", a, b, c);
		
	return 0;
}