# include <stdio.h>
# include <malloc.h>

struct Student
{
	int age;
	float sorce;
	char name[100];	
};

void f(struct Student * p, int * len);
void sort(struct Student * p, int * len);
void p(struct Student * p, int * len);

int main(void)
{
	int len;
	struct Student * pArr;

	printf("请输入学生的个数\n");
	printf("len = ");
	scanf("%d", &len);

	pArr = (struct Student *)malloc(len * sizeof(struct Student));

	f(pArr, &len);     //输入信息
	sort(pArr, &len);  // 成绩排序
	p(pArr, &len); //输出信息

	return 0;
}

void f(struct Student * p, int * len)
{
	int i;
	for(i = 0; i < *len; ++i)
	{	
		printf("请输入%d个学生的信息\n", i+1);
		printf("age = ");
		scanf("%d", &p[i].age);
		printf("sorce = ");
		scanf("%f", &p[i].sorce);
		printf("name = ");
		scanf("%s", p[i].name);

	}
}

void p(struct Student * p, int * len)
{
	int i;
	for (i = 0; i < *len; ++i)
	{
		printf("\n\n第%d个学生的信息为\n", i+1);
		printf("age = %d\n", p[i].age);
		printf("sorce = %f\n", p[i].sorce);
		printf("name = %s\n", p[i].name);
	}
}

void sort(struct Student * p, int * len)
{
	int i, j;
	struct Student t;
	for(i = 0; i < *len-1; ++i)
	{
		for(j = 0; j < *len-1-i; ++j)
		{
			if(p[j].sorce > p[j+1].sorce)
			{
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t;
			}
		}
	}


}