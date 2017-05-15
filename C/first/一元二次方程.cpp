/*
2014年2月11日12:11:35
while后面要加;,while(1)代表真，也是就是无限循环
*/

# include <stdio.h>
# include <math.h>
int main(void)
{
	double a, b, c;
	double delta;
	double x1, x2;
	
	do
	{
		printf("请输入一元二次方程的三个系数:\n");
		
		printf("a=");
		scanf("%lf", &a);
		
		printf("b=");
		scanf("%lf", &b);
		
		printf("c=");
		scanf("%lf", &c);
		
		delta = b*b - 4*a*c;
		
		if(delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
			printf("有两个解，x1 = %lf, x2 = %lf\n", x1, x2);
		}
		
		else if(delta == 0)
		{
			x1 = x2 = -b / (2*a);
			printf("有唯一解，x1 = %lf, x2 = %lf\n", x1, x2);
			
		}
		else
		{
			printf("无解\n");
		}
	}while(1);
		
		return 0;
}