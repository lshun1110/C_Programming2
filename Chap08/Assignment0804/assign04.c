/*
	파일명: assign04.c
	내용: PA04, 배열 원소 가리키는 포인터 활용해서 실수 배열 평균 구하는 코드 작성하세요.
	작성자: 이승훈
	날짜: 2025.9.22
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0804();
float calculate_arr(float* arr, int size);

int main()
{
	Assignment0804();
	return 0;
}

void Assignment0804()
{
	float arr[10] = { 0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("평균 : %f", calculate_arr(arr, size));
}

float calculate_arr(float * arr, int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++, arr++)
		sum += *arr;
	return sum / (float) size;
}