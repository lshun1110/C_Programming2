#include <stdio.h>

void print_array_double(double arr[], int sz);
void printArrayDouble(double* arr, int sz);
int test_print_array();
int test_function_pointer();
double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);

int main()
{
	//test_print_array();
	test_function_pointer();
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

//��� :1���� �Ǽ� �迭�� �Է� �޾� �ֿܼ� ����Ѵ�.
//�Լ��� : print_array_double
//�Է� : double Ÿ�� 1���� �迭 �ּ�
//��� : �͹̳ο� �迭�� ������ ���ڰ� ���
//��ȯ : ����

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

/*
	�Լ� �̸� = �Լ� ���� �ּ� (�ణ ���� ����)
*/

int test_function_pointer()
{
	double (*pfunc)(double a, double b) = NULL;
	// �������� �������̰� �������� �κ��� ���� �� ���� �ڵ�
	pfunc = add;

	double result = (*pfunc)(3.0,4.0);

	printf("%lf", result);


	// �Ϲ������� ���ʸ�ó�� �Լ������Ͷ��� 'void' ���°� �����Ѱ�? 
	// ���� �ȴٸ� �̰͵� ���� �����̱⿡ �޸� �� ������ �ٲ���ϴ°�?
	// ���̽�ó�� �Լ��� �ϱ� ��ü ó�� �Ѵٸ� 
}

//���� ���� ��� ��ȯ
//�Է� : �� �Ǽ�
//��� : ���� ��
double add(double a, double b)
{
	return a + b;
}

//���� ���� ��� ��ȯ
//�Է� : �� �Ǽ�
//��� : �� ��
double sub(double a, double b)
{
	return a + b;
}

//���� ���� ��� ��ȯ
//�Է� : �� �Ǽ�
//��� : ���� ��
double mul(double a, double b)
{
	return a + b;
}