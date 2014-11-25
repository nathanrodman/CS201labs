#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	int num1;
	char op;
	int num2;
	if (argc !=4 )
	{
		printf("Call as: lab3 <num> <op> <num>\n");
		printf("\t<op>: valid arithmitic operator: +, -, *, /\n");
		printf("\t<num>: integer or floating point, signed or unsigned\n");
	}
	else
	{	
		if (strlen(argv[2]) > 1)
		{
			printf("Error! Operator must be one character!\n");
			return 1;
		}

		sscanf(argv[1], "%d", &num1);
		sscanf(argv[2], "%c", &op);
		sscanf(argv[3], "%d", &num2);
		
		switch (op) {
		case '+':
			printf("%d %c %d = %d\n", num1, op, num2, num1 + num2);
			break;
		case '-':
			printf("%d %c %d = %d\n", num1, op, num2, num1 - num2);
			break;
		case '*':
			printf("%d %c %d = %d\n", num1, op, num2, num1 * num2);
			break;
		case '/':
			printf("%d %c %d = %d\n", num1, op, num2, num1 / num2);
			break;
		default:
			printf("Not a valid arithmitic operator!\n");
			break;
		}
	}
	return 0;
}
