#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	int nA = 0;
	int nB = 0;
	char ch0per;

	printf("Input your arithmetic operation: \n");
	scanf_s("%d%c%d", &nA, &ch0per, 1, &nB);

	switch (ch0per)
	{
	case '+':

	{
		printf("Addtion:\n");
		int nRes = nA + nB;
		printf("%d %c %d = %d\n", nA, ch0per, nB, nRes);
		break;
	}
	case '-':
	{
		printf("Subtraction:\n");
		int nRes = nA - nB;
		printf("%d %c %d = %d\n", nA, ch0per, nB, nRes);
		break;
	}
	case '*':
	{
		printf("Multipilcation:\n");
		int nRes = nA * nB;
		printf("%d %c %d = %d\n", nA, ch0per, nB, nRes);
		break;
	}
	case '/':
	{
		printf("Division:\n");
		int nRes = nA / nB;
		printf("%d %c %d = %d\n", nA, ch0per, nB, nRes);
		break;
	}
	return 0;
	}
}



	
