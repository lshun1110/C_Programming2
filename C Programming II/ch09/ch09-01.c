/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ���� / ���� ����
	��¥ : 2025.09.24
*/

/*
	���� : Ű����κ��� ���� ���ڵ带 �� �� �Է¹޾� �ʵ带 �����Ͽ�
	����ü �迭�� ������ �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���ڵ� ���� : �̸� | �й� | �а� | �г� (����)
	�Է� ���� ���� : "exit" �Է�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void Contact_mainstream();
char* trim(char* str);
char* ltrim(char* str);
char* rtrim(char* str);
void print_struct();

typedef struct Student
{
	char name[24];
	char id[16];
	char major[32];
	int year;
}Student;

Student arr[20] = { 0 };

int main()
{
	Contact_mainstream();
	printf("���α׷� ����Ǿ����ϴ�");
	return 0;
}

void Contact_mainstream()
{
	char sbuffer[80] = "";

	char* token;
	char* context = NULL; // ��ū ���� static x reentrance

	int i = 0;
	int a = 1;

	while (1)
	{
		printf("�̸� | �й� | �а� | �г� (����) �� �������� �Է��ϼ���. exit �Է� �� �����մϴ�\n");
		(void)scanf("%s", sbuffer);
		
		trim(sbuffer);

		if (strcmp(sbuffer,"exit") == 0)
			return;

		token = strtok_s(sbuffer, "|", &context);

		while (token != NULL) 
		{
			printf("��ū: %s\n", token);
			trim(token);
			if (a == 1)
			{
				trim(token);
				strcpy(arr->name[i], token);
			}
			else if (a == 2)
			{
				trim(token);
				strcpy(arr->id[i], token);
			}	
			else if (a == 3)
			{
				trim(token);
				strcpy(arr->major[i], token);
			}
			else if (a == 4)
			{
				trim(token);
				sscanf(token, "%d", &arr[i]);
			}	
			token = strtok_s(NULL, "|", &context);
			a++;
		}
		a = 1;
		i++;
		if (i >= 20)
			break;
	}
	print_struct();
}

char* ltrim(char* str) 
{
	if (str == NULL) 
		return NULL;

	while (*str && isspace(*str)) 
	{
		str++;
	}
	return str;
}

char* rtrim(char* str) 
{
	if (str == NULL) 
		return NULL;

	int len = strlen(str);

	if (len == 0) 
		return str;

	char* end = str + len - 1;
	while (end >= str && isspace(*end)) 
	{
		*end = '\0';
		end--;
	}
	return str;
}

char* trim(char* str) 
{
	if (str == NULL) 
		return NULL;
	rtrim(str);
	return ltrim(str);
}

void print_struct()
{
	for (int i = 0; i < 20; i++)
	{
		printf("%d ��° �л�\n",i+1);
		printf("�̸� : %s\n",arr[i].name);
		printf("�й� : %s\n", arr[i].id);
		printf("�а� : %s\n", arr[i].major);
		printf("�г� : %d\n", arr[i].year);
	}
}