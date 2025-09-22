/*
	파일명: assign02.c
	내용: PA02, 배열의 원소 가리키는 포인터와 포인터 연산을 이용해서 실수형 배열의 모든 원소를
			출력하는 프로그램을 작성하시오. 크기는 10이며, 값은 알아서 정하고 사용한다.
	작성자: 이승훈
	날짜: 2025.9.22
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0802();
void print_float_array(float* arr, int size);

int main()
{
	Assignment0802();
	return 0;
}

void Assignment0802()
{
	float arr[10] = { 1.0 ,2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0,9.0, 10.0 };
	int size = sizeof(arr) / sizeof(arr[0]);

	print_float_array(arr, size);
}

void print_float_array(float * arr, int size)
{
	for (int i = 0; i < size; i++, arr++)
		printf("%.2f ", *arr);
}