/*
	파일명: assign08.c
	내용: PA08, 정수형 배열을 특정 값으로 채우는 fill_array 함수를 작성해라. 포인터와 역참조만 써서
				배열을 출력하라.
	작성자: 이승훈
	날짜: 2025.9.22
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0808();
void fill_array(int* arr, int size, int a);

int main()
{
	Assignment0808();
	return 0;
}

void Assignment0808()
{
	int arr[20] = { 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int a = 0;

	printf("배열의 원소에 저장할 값? ");
	scanf("%d",&a );

	fill_array(arr, size,a);
}

void fill_array(int *arr,int size,int a)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = a;
	}
	printf("배열 : ");
	for (int i = 0; i < size; i++)
		printf("%d ",arr[i]);
}