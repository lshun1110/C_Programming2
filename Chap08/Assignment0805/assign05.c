/*
	파일명: assign05.c
	내용: PA05, 등차 수열 구현하세요 arith_seq는 함수의 매개변수는 배열과 배열 크기 공차이다.
	작성자: 이승훈
	날짜: 2025.9.22
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0805();
void arith_seq(int* arr, int size, int a, int d);

int main()
{
	Assignment0805();
	return 0;
}

void Assignment0805()
{
	int arr[10] = { 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int a, d;

	printf("첫 번째 항 ? ");
	scanf("%d", &a);

	printf("공차 ? ");
	scanf("%d", &d);

	arith_seq(arr, size, a, d);
}

void arith_seq(int* arr, int size,int a, int d)
{
	printf("등차 수열 : ");
	arr[0] = a;
	for (int i = 0; i < size - 1; i++)
		arr[i + 1] = arr[i] + d;
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
		
}