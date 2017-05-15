# include <stdio.h>
# include <string.h>

struct Student 
{
	int age;
	char sex;
	char name[100];//分配一百个字节

};

void InputStudent(struct Student * sti);
void OutputStudent(struct Student * sto);

int main(void)
{
	struct Student st;
	printf("%d\n", sizeof(st));
	InputStudent(&st);
	OutputStudent(&st);
	return 0;

}

void InputStudent(struct Student * sti)
{
	sti->age = 88;
	sti->sex = 'F';
	strcpy(sti->name, "张三");//字符串函数

}

void OutputStudent(struct Student * sto)//定义成指针（*sto）只需四个字节，而定义成sto需要接收108个字节
{
	printf("%d %c %s\n", sto->age, sto->sex, sto->name);
}
