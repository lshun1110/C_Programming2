/*
	파일명: assign07.c
	내용: PA07, 실수형 배열을 뒤집는 reverse_array 함수를 작성하고 이를 확인하라.
	작성자: 이승훈
	날짜: 2025.9.22
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0807();
void reverse_array(float* arr, int size);

int main()
{
	Assignment0807();
	return 0;
}

void Assignment0807()
{
	float arr[10] = { 0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0, };
	int size = sizeof(arr) / sizeof(arr[0]);

	float* p = &arr[9];
	reverse_array(p, size);

}

void reverse_array(float * arr, int size)
{
	for (int i = 0; i < size; i++, arr--)
		printf("%.2f ", *arr);
}