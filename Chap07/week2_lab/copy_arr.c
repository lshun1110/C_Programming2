#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define Max_arr 10

int printArrayFloat(float R[], int size);
int copyArrayFloat(float from[], float to[], int size);
void input_ArrayFloat(float from[]);

int main()
{
	float arr[Max_arr] = {0};
	int size = sizeof(arr) / sizeof(arr[0]);
	float arr_c[Max_arr];

	input_ArrayFloat(arr);

	if (copyArrayFloat(arr, arr_c, size) != 0)
		printf("�迭 ���� �� ������ ����");

	printArrayFloat(arr_c, size);

	printf("����(��)");
	return 0;
}

void input_ArrayFloat(float from[])
{
	for (int i =0; i< Max_arr; i++)
	{
		(void)scanf("%f", &from[i]);
	}
	return;
}

int copyArrayFloat(float from[], float to[], int size)
{
	for (int i = 0; i < size; i++)
	{
		to[i] = from[i];
	}

	for (int i = 0; i < size; i++)
	{
		if (to[i] != from[i])
		{
			return -1;
		}
	}
	return 0;
}

int printArrayFloat(float R[], int size) 
{
	for (int i = 0; i < size; i++)
	{
		printf("�迭�� %d��° �� = %.2f\n", i+1, R[i]);
	}
	return 0;
}

