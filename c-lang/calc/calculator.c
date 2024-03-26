#include <stdio.h>

int main() {
	float num1, num2, result;

	char operator;

	printf("enter the first number: ");
	scanf("%f", &num1);

	printf("enter the operator(+, -, *, /): ");
	scanf(" %c", &operator);

	printf("enter the second number: ");
	scanf("%f", &num2);

	switch(operator) {
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;

		 case '*':      
                        result = num1 * num2;
                        break;
 

		 case '/':
			if (num2 != 0){
                        	result = num1 / num2;
			} else {
				printf("Error! Division by zero. \n");
				return 1;
			}
			break;
		default:
			printf("Error! invalid operator. \n");
			return 1;
	}
	printf ("Rrsult: %.2f\n", result);

	return 0;

}
