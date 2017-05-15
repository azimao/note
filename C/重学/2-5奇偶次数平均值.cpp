# include <stdio.h>
int main(void)

{
	int i;
	int e = 0, b =0;
	int sum = 0;
	int sum1 = 0;
	float avg, avg1; //average

	for (i = 1; i <101; ++i)
	{
		if(i%2 == 0)	
		{
			sum = sum + i;
		    ++e;
		}
		else
		{
			sum1 = sum1 + i;
			++b;
		}
	}
	avg = 1.0*sum / e;
	avg1 = 1.0*sum1 / b;
	printf("e = %d\n", e);
	printf("sum = %d\n", sum);
	printf("avg = %f\n", avg);
	printf("b = %d\n", b);
	printf("sum1 = %d\n", sum1);
	printf("avg1 = %f\n", avg1);
	return 0;
}