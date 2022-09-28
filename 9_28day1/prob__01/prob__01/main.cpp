#include <stdio.h>
#include <stdlib.h>

#define MINCHESTSIZE 90
#define MAXCHESTSIZE 100

int main(void)
{
	int inCHEST_SIZE = 0;
	char chCHESTSIZE;

	printf("Input your chest size: \n");
	scanf_s ("%d", &inCHEST_SIZE);

	if (inCHEST_SIZE > MINCHESTSIZE)
	{
		chCHESTSIZE = 'L';
	}
	else if ((inCHEST_SIZE > MINCHESTSIZE) && (inCHEST_SIZE <= MAXCHESTSIZE))
	{
		chCHESTSIZE = 'M';
	}
	else 
	{
		chCHESTSIZE = 'S';
	}
	
	printf("Your ChestSize is %c\n", chCHESTSIZE);
	
	return 0;
}


