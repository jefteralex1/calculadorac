#include <stdio.h>
#include <stdlib.h>

void print_binary(unsigned int num) {
    int i;
    for (i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main() {
    char operator;
    double num1, num2, result;
    unsigned int num1_int, num2_int, result_int;

    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Digite dois números: ");
    scanf("%lf %lf", &num1, &num2);

    num1_int = (unsigned int) num1;
    num2_int = (unsigned int) num2;

    switch(operator) {
        case '+':
            result = num1 + num2;
            result_int = num1_int + num2_int;
            break;

        case '-':
            result = num1 - num2;
            result_int = num1_int - num2_int;
            break;

        case '*':
            result = num1 * num2;
            result_int = num1_int * num2_int;ss
            break;

        case '/':
            result = num1 / num2;
            result_int = num1_int / num2_int;
            break;

        default:
            printf("Operador inválido!");
            return 1;
    }

    printf("Resultado em decimal: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    printf("Resultado em binário: ");
    print_binary(num1_int);
    printf(" %c ", operator);
    print_binary(num2_int);
    printf(" = ");
    print_binary(result_int);
    printf("\n");

    printf("Resultado em hexadecimal: 0x%08x %c 0x%08x = 0x%08x\n", num1_int, operator, num2_int, result_int);

    return 0;
}