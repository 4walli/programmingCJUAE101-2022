#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MATRIX_A 3 //n값
#define MATRIX_B 5 //n값
#define MAX_NUM 100// 맥스 무작위 정수 생성 범위 값

void GenRANDseed()
{
	srand((unsigned int)(time(NULL)));
	return;
} // 정수 생성 함수 종료
int main(void)
{
	int i, j, k, p = 0; // 행렬을 만드는 필요한 수
	int a[MATRIX_A][MATRIX_B] = { 0 };
	int b[MATRIX_B][MATRIX_A] = { 0 }; // 행렬을 만드는 필요한 배열

	GenRANDseed();

	printf("MATRIX_A : \n");

	for (i = 0; i < MATRIX_A; i++)
	{
		for (j = 0; j < MATRIX_B; j++)
		{
			a[i][j] = rand() * MAX_NUM / RAND_MAX;// 무작위 정수가 배열 저장
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

	printf("MULTIPLICATION OF MATRICES A AND B : \n"); // 행렬 a와b의 곱의 결과

	for (i = 0; i < MATRIX_A; i++)
	{
		for (k = 0; k < MATRIX_A; k++)
		{
			int res = 0; 

				for (j = 0; j < MATRIX_B; j++)
				{
					res += a[i][j] * b[j][k]; // 행렬 a와b의 곲
				}
			    printf("%2d\n", res); // 행렬의 곱 출력
				
		}

		printf("\n");
	}

	return 0;
}
