/*
2014年4月11日21:03:12
二维数组整体向右缩进是 Tab键，向左缩进shift+Tab
怎样输出二维数组
*printf哪里%d加空格，输出页面也有空格

*/
# include <stdio.h>
int main(void)
{
	int a[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	int i, j;
	for(i=0; i<3; ++i)
	{
		for(j=0;j<4;++j)
                
			printf(" %d", a[i][j]);
                   printf("\n");
	}
	return 0;

}