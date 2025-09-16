/*
	drill 1������ 3������
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findMinFloat(float R[], int from, int to);
void swapFloat(float R[], int aindex, int bindex);
int selectionSortFloat(float R[], int length);
int compare_float(const void* a, const void* b);
int qsortFloat(float R[], int size);

int main()
{
	int a, b;
	float arr[5] = { 2.0,4.0,5.0,1.0,3.0 };

	int size = sizeof(arr) / sizeof(arr[0]);

	/*
	printf("�ε��� ��ȣ a ���� b ���� �� ���� �ε��� ���\n");
	(void)scanf("%d %d", &a, &b);
	printf("���� ���� �ε��� : %d\n", findMinFloat(arr, a, b));

	printf("a �ε����� b �ε����� �� ����\n");
	(void)scanf("%d %d", &a, &b);
	swapFloat(arr, a, b);
	printf("�ٲ� �� : %.2f %.2f \n", arr[a], arr[b]);

	printf("���� ����\n");

	*/

	/*
	if (selectionSortFloat(arr, 5) == 0)
	{
		printf("���� ���� ����\n");
		for (int i = 0; i < 5; i++)
			printf("%.2f ", arr[i]);
	}
	else
	{
		printf("���� ���� ����\n");
	}
	*/

	/*
	if (qsortFloat(arr,size) == 0)
	{
		printf("�� ���� ����\n");
		for (int i = 0; i < 5; i++)
			printf("%.2f ", arr[i]);
	}
	else
	{
		printf("�� ���� ����\n");
	}
	*/

	if (selection_sort(arr, size, sizeof(arr[0]), compare_float) == 0)
	{
		printf("2�� �� ���� ����\n");
		for (int i = 0; i < size; ++i) 
			printf("%.2f\n", arr[i]);
	}

	selectionSortFloat(arr, size);
	
	return 0;
}

int findMinFloat(float R[], int from, int to)
{
	float min = R[from];
	int index = from;
	for (int i = from + 1; i < to; i++)
	{
		if (min > R[i])
		{
			min = R[i];
			index = i;
		}
	}
	return index;
}

void swapFloat(float R[], int aindex, int bindex)
{
	float temp;
	temp = R[aindex];
	R[aindex] = R[bindex];
	R[bindex] = temp;
	return;
}

int selectionSortFloat(float R[], int length)
{
	for (int i = 0; i < length - 1; i++)
		swapFloat(R, i, findMinFloat(R, i, length));

	for (int i = 0; i < length - 1; i++)
	{
		if (R[i] > R[i + 1])
			return -1;
	}

	return 0;
}

int qsortFloat(float R[],int size)
{
	qsort(R, size, sizeof(float), compare_float);

	for (int i = 0; i < size - 1; i++)
	{
		if (R[i] > R[i + 1])
			return -1;
	}
	return 0;
}

int compare_float(const void* a, const void* b) 
{
	float x = *(const float*)a, y = *(const float*)b;
	return (x > y) - (x < y);
}

int selection_sort(void* base, int n, int size, int (*cmp)(const void*, const void*))
{
	if (!base || !cmp || size <= 0 || n <= 1) 
		return -2;

	unsigned char* p = (unsigned char*)base;
	void* tmp = malloc(size);              
	if (!tmp) 
		return -1;

	for (int i = 0; i < n - 1; ++i) 
	{
		int min_idx = i;
		for (int j = i + 1; j < n; ++j) 
		{
			void* ej = p + j * size;
			void* emin = p + min_idx * size;
			if (cmp(ej, emin) < 0) min_idx = j;
		}
		if (min_idx != i) {
			void* ei = p + i * size;
			void* emin = p + min_idx * size;
			memcpy(tmp, ei, size);  
			memcpy(ei, emin, size);
			memcpy(emin, tmp, size);
		}
	}
	free(tmp);
	return 0;
}
