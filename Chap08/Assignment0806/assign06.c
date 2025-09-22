/*
	파일명: assign06.c
	내용: PA06, 정수 배열 최대 최소를 구하는 함수를 구한후 출력하세요.
	작성자: 이승훈
	날짜: 2025.9.22
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0806();
void get_min_max(const int* arr, int size, int* min, int* max);

int main()
{
	Assignment0806();
	return 0;
}

void Assignment0806()
{
	int arr[10] = {50,30,20,60,80,10,90,40,70,100};
	int size = sizeof(arr) / sizeof(arr[0]);
	int mn, mx;
	get_min_max(arr, size , &mn, &mx);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("최대값 : %d, 최솟값 : %d", mx, mn);
}

void get_min_max(const int* arr, int size, int* min, int* max) 
{
	int mn = arr[0], mx = arr[0];

	for (int i = 1; i < size; i++) {
		if (arr[i] < mn) mn = arr[i];
		if (arr[i] > mx) mx = arr[i];
	}

	*min = mn;
	*max = mx;
}