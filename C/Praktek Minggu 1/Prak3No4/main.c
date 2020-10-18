#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    printf("Pisahkan dengan spasi");
    scanf("%d %d %d", &a, &b, &c);
    d = b*b-4*a*c;
    printf("Nilai diskriminan = %d\n", d);
}
