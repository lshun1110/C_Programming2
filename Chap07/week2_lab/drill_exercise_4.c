/*
	drill 4��
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Contact
{
	char name[20];
	char tel[20];
	char memo[30];
}CT;

int cmp_CT_by_name(const void* a, const void* b);
void printArrayContact(CT* R, int size);

int main()
{
	CT arr[5] = {
		{"�̽���", "010-0000-1111" , "�ȳ���"},
		{"�赿��", "010-0000-2222" , "�ȳ���"},
		{"����ȯ", "010-0000-3333" , "�ȳ���"},
		{"�Ÿ�", "010-0000-4444" , "�ȳ���"},
		{"����ȣ", "010-0000-5555" , "�ȳ���"},
	};
	
	int size = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, size, sizeof(arr[0]), cmp_CT_by_name);
	printArrayContact(arr, size);
	
	return 0;
}

int cmp_CT_by_name(const void* a, const void* b)
{
	const CT* pa = (const CT*)a;
	const CT* pb = (const CT*)b;
	return strcmp(pa->name, pb->name);
}

void printArrayContact(CT* R, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%s %s %s\n", (R + i)->name, (R + i)->tel, (R + i)->memo);
	}
}