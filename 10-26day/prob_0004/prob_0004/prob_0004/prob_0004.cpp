#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANDOM_MAX 10 //�ִ� ���� 10��

int main(void)
{

	int i, j;
	int temp;
	int arr[10];

	srand((unsigned)time(NULL));
	printf("RANDOM_NUMBERS\n");
	for (i = 0; i < 10; i++)
	{
		arr[i] = rand() % RANDOM_MAX;// ������ ���� �迭 a�� ����
		printf("%2d", arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("\n\nascending order:");// �������� ����
	for (i = 0; i < 10; i++)
	{
		printf("%2d", arr[i]);
	}
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("\n\ndescending order:");// �������� ����
	for (i = 0; i < 10; i++)
	{
		printf("%2d", arr[i]);
	}
	return 0;
}







									


