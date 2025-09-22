#include <stdio.h>

void get_sum_product(double x, double y, double* sum, double* product);
void test_function();

int main()
{
	test_function();
	return 0;
}

void test_function()
{
	double result1, result2;

	get_sum_product(10.0, 20.0, &result1, &result2);
	printf("sum = %lf, product = %lf\n", result1, result2);
}


// int 에서 double을 받는 함수로 변환 변수 데이터 타입뿐만 아니라 포인터도 double을 가리키게 변경

void get_sum_product(double x, double y, double* sum, double* product)
{
	*sum = x + y;
	*product = x * y;
}