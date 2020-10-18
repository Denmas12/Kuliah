#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    float number1, number2;
    printf("Masukkan 2 buah bilangan & sebuah operator\n");
    printf("dengan format : number1 operator number2\n\n");
    scanf("%f %c %f",&number1, &operator, &number2);
    switch(operator)
    {
    case '*':
        printf("Hasil %g %c %g adalah %g\n", number1, operator, number2, number1*number2);
        break;
    case '/':
        printf("Hasil %g %c %g adalah %g\n", number1, operator, number2, number1/number2);
        break;
    case '+':
        printf("Hasil %g %c %g adalah %g\n", number1, operator, number2, number1+number2);
        break;
    case '-':
        printf("Hasil %g %c %g adalah %g\n", number1, operator, number2, number1-number2);
        break;
    default:
        printf("Operator tidak valid\n");
    }
    return 0;
}
