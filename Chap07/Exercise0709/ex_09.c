/*
	예제 7-9 : 배열의 탐색
*/

/*
	기본적으로 저장된 데이터 중 필요한 데이터를 찾는 것을 탐색이라고하며,
	여러가지 탐색 기법이 있고, 각 상황에 따라 가장 효율적인 탐색 방법을 찾는게 
	중요해 보인다. 데이터의 크기, 종류, 정렬 유무 등 여러가지 고려사항이 있다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int data[] = { 78,34,52,15,63,15,25 };
	int size;
	int key, i;

	size = sizeof(data) / sizeof(data[0]); // 배열 길이 구하기
	printf("data = ");

	for (i = 0; i < size; i++)
		printf("%d ",data[i]);
	printf("\n");

	printf("찾을 값(키)? ");
	scanf("%d", &key);
	for (i = 0; i < size; i++)
	{
		if (data[i] == key) // 배열의 원소와 키 비교
			printf("찾은 원소의 인덱스 : %d\n", i);
	}
	return 0;
}

/*
	탐색 조건에 따라 탐색키와 일치하는 항목을 모두 찾아야 하는 경우도 있고
	첫 번째 항목만 찾는 경우도 있다.
*/