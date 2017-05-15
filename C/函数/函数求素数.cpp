/*
2014年4月15日20:18:15
bool判断真假函数
注意main函数里面的if内容

*/
# include <stdio.h>
bool IsPrime(int val)
{
	int i;

	
	for(i=2; i<val; ++i)
	{
		if(val%i == 0)
			break;
	}
	if(i == val)
		return true;
	else
	    return false;

}
int main(void)
{
	int m;
	scanf("%d",&m);

	if(IsPrime(m))
		printf("yes\n");
	else
		printf("no\n");

	return 0;



}


/*一般写法
# include <stdio.h>
int main(void)
{
	int val;
	int i;

	scanf("%d", &val);
	
	for(i=2; i<val; ++i)
	{
		if(val%i == 0)
			break;
	}
	if(i == val)
		printf("yes\n");
	else
		printf("no\n");
	



	return 0;
}
*/