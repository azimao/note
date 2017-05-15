
# include <stdio.h>
void exchange_2(int * c, int * d)//c是int*，int是*c；c，d可以不用写 ，形参里卖只有写（int*，int*）
{
	int t;
	t = *c;
	*c = *d;
	*d = t;
}

int main(void)
{
	int a = 5;
	int b = 6;
	exchange_2(&a, &b);//&c和a对应，&d和b对应
	
	printf("a = %d, b = %d\n", a, b);
	return 0;
}






//不能改变a，b的值
/*
# include <stdio.h>
void exchang_1(int c, int d)
{
	int t;
	t = c;
	c = d;
	d = t;
}

int main(void)
{
	int a = 5;
	int b = 6;
	exchange_2(a, b);
	
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
*/
//输出结果是5,6；没有改变；认为不用指针函数只能把一个值改变、
 