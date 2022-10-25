#include <stdio.h>
#include <string.h> //Header
#define password "0328"

int main(void)
{
	char pw[5] = password; 
	char answer[5]; 
	printf("int put your password\n");
	scanf_s("%s", answer, 5);

	while (1)
	{
		if (strcmp(pw, answer) == 0)
			break;
		printf("not matched, retry..\n"); //output a reminder to re-enter
		scanf_s("%s", answer, 5);

	}
	printf("normaltermination..\n");//output a normal shutdown
	return 0;
}