/*
	drill 4¹ø
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
		{"ÀÌ½ÂÈÆ", "010-0000-1111" , "¾È³ç³ç¾È"},
		{"±èµ¿ÁØ", "010-0000-2222" , "¾È³ç³ç¾È"},
		{"À¯¼öÈ¯", "010-0000-3333" , "¾È³ç³ç¾È"},
		{"½Å¸í", "010-0000-4444" , "¾È³ç³ç¾È"},
		{"±èÂùÈ£", "010-0000-5555" , "¾È³ç³ç¾È"},
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