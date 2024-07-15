#include<stdio.h>

int main() {
    char op;
    double first, second;

    printf("Enter the operator (+,-,*,/) :");
    scanf("%c", &op);
    printf("Enter the two operands :");
    scanf("%lf %lf", &first, &second);

    switch (op) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
            break;
        default:
            printf("error!!!! operator not found 404 :))");
    }
    return 0;
}

