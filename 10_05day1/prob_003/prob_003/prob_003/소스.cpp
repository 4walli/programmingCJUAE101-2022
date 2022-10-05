#include <stdio.h>

int main(void)
{
	int num1, num2;


	printf("Please enter the first number:");
	scanf_s("%d", &num1);
	printf("Please enter the second number:");
	scanf_s("%d", &num2);




	{
		printf("%d + %d = %d\n", num1, num2, num1 + num2);

	}


	{
		printf("%d - %d = %d\n", num1, num2, num1 - num2);

	}


	{
		printf("%d * %d = %d\n", num1, num2, num1 * num2);

	}


	{
		printf("%d / %d = %d\n", num1, num2, num1 / num2);

	}

	{
		printf("%d REM %d = %d\n", num1, num2, num1 % num2);

	}
	return 0;
}







