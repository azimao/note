# include <stdio.h>

int main (void)
{
    int x = 47;

    printf("%x\n", x);
    printf("%X\n", x);  //   输出的结果是  2F
	printf("%#x\n", x); //   输出的结果是 0x2f (推荐使用)
	printf("%#X\n", x);
	return 0;
}