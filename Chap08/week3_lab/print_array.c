#include <stdio.h>

void print_array_double(double arr[], int sz);
void printArrayDouble(double* arr, int sz);
int test_print_array();

int main()
{
	test_print_array();
	return 0;
}

int test_print_array()
{
	double da[] = { 1.0,2.0,3.0,4.0,5.0 };
	int size = sizeof(da) / sizeof(da[0]);

	print_array_double(da, size);

	printArrayDouble(&da[0], size);

	return 0;
}

//기능 :1차원 실수 배열을 입력 받아 콘솔에 출력한다.
//함수명 : print_array_double
//입력 : double 타입 1차원 배열 주소
//출력 : 터미널에 배열의 내용을 예쁘게 출력
//반환 : 없음

void print_array_double(double arr[],int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%lf ",arr[i]);
	}
	printf("\n");
	return;
}

void printArrayDouble(double * arr, int sz)
{
	for (int i = 0; i < sz; i++,arr++)
	{
		printf("%lf ", *arr);
	}
	printf("\n");
	return;
}