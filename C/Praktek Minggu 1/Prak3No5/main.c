#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d;
    printf("Pisahkan dengan spasi");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b-4*a*c;
    printf("Nilai diskriminan = %f\n", d);
}
