# include <stdio.h>
# include <string.h>

struct Student 
{
	int age;
	char sex;
	char name[100];//����һ�ٸ��ֽ�

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
	strcpy(sti->name, "����");//�ַ�������

}

void OutputStudent(struct Student * sto)//�����ָ�루*sto��ֻ���ĸ��ֽڣ��������sto��Ҫ����108���ֽ�
{
	printf("%d %c %s\n", sto->age, sto->sex, sto->name);
}
