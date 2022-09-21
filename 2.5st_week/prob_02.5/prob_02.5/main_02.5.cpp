#include <stdio.h>

int main(void)
{
	double Weight;
	double Height;
	double res;
	double BMI;

	printf("Weight(Kg) and Height(cm) inout :");
	scanf_s("%if%if", &Weight, &Height);
	Height /= 100;
	BMI = Weight/ (Height * Height);
	res = (BMI >= 20.0) && (BMI < 25.0);
	printf("%s", (res) ?  "It's the standard." : "You need to take care of my weight");

	return 0;
}
