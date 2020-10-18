#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, f;
    printf("Suhu dalam Celcius ");
    scanf("%f",&c);
    f = c * 1.8 + 32;
    printf("Suhu dalam Fahrenheit %5.2f \n", f);
    return 0;
}
