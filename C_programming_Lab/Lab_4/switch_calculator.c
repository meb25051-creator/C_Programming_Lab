#include <stdio.h>
int main() {
    char op;
    int a, b;
    int result;    
    float div;     

    printf("Enter operator (+, -, *, /,): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(op) {

        case '+':
            result = a + b;
            printf("Result = %d\n", result);
            break;

        case '-':
            result = a - b;
            printf("Result = %d\n", result);
            break;

        case '*':
            result = a * b;
            printf("Result = %d\n", result);
            break;

        case '/':
            if (b != 0) {
                div = (float)a / b;
                printf("Result = %.2f\n", div);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
