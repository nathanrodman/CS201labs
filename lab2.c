#include <stdio.h>

int main(){
	float num1;
	float num2;

	printf("Lab 2\n");
	printf("\nEnter the first number: ");
	scanf("%f", &num1);

	printf("Enter the second number: ");
	scanf("%f", &num2);

	printf("\n%10.2f", num1);
	printf("\n+%9.2f", num2);
	printf("\n----------");
	printf("\n%10.2f\n", (num1 + num2));

return 0;
}
