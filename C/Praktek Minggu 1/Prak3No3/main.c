#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 12, b = 2, c = 3, d = 4;
    printf("1 = %d\n", a%b);
    printf("2 = %d\n", a-c);
    printf("3 = %d\n", a+b);
    printf("4 = %d\n", a/d);
    printf("5 = %d\n", a/d*d+a%d);
    printf("6 = %d\n", a%d/d*a-c);
    return 0;
}
