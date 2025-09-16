#include <stdio.h>
#include <string.h>

typedef struct Contact
{
	char name[20];
	char tel[20];
	char memo[30];
}CT;

void printArrayContact(CT *R, int size);
void copyArrayContact(CT *from, CT *to, int size);

int main()
{
	CT arr[5] = { 
		{"�̸���", "010-0000-1111" , "�ȳ���"},
		{"���̸�", "010-0000-2222" , "�ȳ���"},
		{"�̸���", "010-0000-3333" , "�ȳ���"},
		{"���̸�", "010-0000-4444" , "�ȳ���"},
		{"�̸���", "010-0000-5555" , "�ȳ���"},
	};
	CT cmp_arr[5] = { 0 };

	int size = sizeof(arr) / sizeof(arr[0]);

	copyArrayContact(arr,cmp_arr,size);
	printArrayContact(cmp_arr, size);

	return 0;
}

void printArrayContact(CT *R, int size)
{
	for (int i = 0; i < size; i ++)
	{
		printf("%s %s %s\n", (R + i)-> name, (R + i)->tel, (R + i)->memo);
	}
}

void copyArrayContact(CT *from, CT *to, int size)
{
	memcpy(to,from, size * sizeof(*to));
}