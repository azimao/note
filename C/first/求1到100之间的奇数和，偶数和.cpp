#include <stdio.h>

int main(void)
{
	int i;
	int j = 0;
	int u = 0;

	for(i=1;i<=100;++i)
	{
		if(i%2 == 0)
		
			u = u  + i;

		else
		
			j = j + i;
			
	 
	}

	printf("j=%d\n",j);
    printf("u=%d\n",u);
	


	return 0;
}