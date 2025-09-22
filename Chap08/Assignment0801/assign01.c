/* 
	파일명: assign01.c
	내용: PA01, 크기가 3인 double 배열 모든 원소의 주소를 출력하세요. (단, 주소구하기 연산자는 사용하지마세요)
	작성자: 이승훈
	날짜: 2025.9.22
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0801();

int main()
{
	Assignment0801();
	return 0;
}

void Assignment0801()
{
	int arr[20];
	for (int i = 0; i < 3; i++)
		printf("x[%d]의 주소 : %p\n",i,arr + i);
}