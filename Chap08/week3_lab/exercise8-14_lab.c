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


// int ���� double�� �޴� �Լ��� ��ȯ ���� ������ Ÿ�ԻӸ� �ƴ϶� �����͵� double�� ����Ű�� ����

void get_sum_product(double x, double y, double* sum, double* product)
{
	*sum = x + y;
	*product = x * y;
}