#include<stdio.h>

int main()
{

	float length, bredth;

	printf("Enter Length of Rectangle: ");
	scanf("%f", &length);

	printf("Enter Bredth of Rectangle: ");
	scanf("%f", &bredth);

	printf("Area of Rectangle = %f \n", length*bredth);

	printf("Perimeter of Rectangle = %f", 2*(length+bredth));

	return 0;
}
