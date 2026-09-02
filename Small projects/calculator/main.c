#include <stdio.h>

int main() {

    float a, b, result;
    char op, choice;

    printf("====================================\n");
    printf("          MINI CALCULATOR\n");
    printf("====================================\n");

    do {

        printf("\nEnter first number: ");
        scanf("%f", &a);

        printf("Enter second number: ");
        scanf("%f", &b);

        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op);

        if (op == '+') {
            result = a + b;
            printf("\nResult: %.2f", result);
        }

        else if (op == '-') {
            result = a - b;
            printf("\nResult: %.2f", result);
        }

        else if (op == '*') {
            result = a * b;
            printf("\nResult: %.2f", result);
        }

        else if (op == '/') {

            if (b != 0) {
                result = a / b;
                printf("\nResult: %.2f", result);
            }

            else {
                printf("\nCannot divide by zero!");
            }
        }

        else {
            printf("\nWrong Operator!");
        }

        printf("\n\nDo you want to calculate again? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\n====================================\n");
    printf("       Thank you for using!\n");
    printf("====================================\n");

    return 0;
}