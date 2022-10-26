#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MATRIX_A 3 //n��
#define MATRIX_B 5 //n��
#define MAX_NUM 100// �ƽ� ������ ���� ���� ���� ��

void GenRANDseed()
{
	srand((unsigned int)(time(NULL)));
	return;
} // ���� ���� �Լ� ����
int main(void)
{
	int i, j, k, p = 0; // ����� ����� �ʿ��� ��
	int a[MATRIX_A][MATRIX_B] = { 0 };
	int b[MATRIX_B][MATRIX_A] = { 0 }; // ����� ����� �ʿ��� �迭

	GenRANDseed();

	printf("MATRIX_A : \n");

	for (i = 0; i < MATRIX_A; i++)
	{
		for (j = 0; j < MATRIX_B; j++)
		{
			a[i][j] = rand() * MAX_NUM / RAND_MAX;// ������ ������ �迭 ����
			printf("%2d\n", a[i][j]);
		}
		printf("\n");
	}
	printf("");

	printf("MATRIX_B : \n");

	for (p = (0); p < MATRIX_B; p++)
	{
		for (k = (0); k < MATRIX_A; k++)
		{
			b[p][k] = rand() * MAX_NUM / RAND_MAX;
			printf("%2d\n", b[p][k]);
		}
		printf("\n");

	}
	printf("");

	printf("MULTIPLICATION OF MATRICES A AND B : \n"); // ��� a��b�� ���� ���

	for (i = 0; i < MATRIX_A; i++)
	{
		for (k = 0; k < MATRIX_A; k++)
		{
			int res = 0; 

				for (j = 0; j < MATRIX_B; j++)
				{
					res += a[i][j] * b[j][k]; // ��� a��b�� ��
				}
			    printf("%2d\n", res); // ����� �� ���
				
		}

		printf("\n");
	}

	return 0;
}
