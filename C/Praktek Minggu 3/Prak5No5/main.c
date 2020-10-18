#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    printf("Masukkan Nilai a : ");scanf("%f", &a);
    printf("Masukkan Nilai b : ");scanf("%f", &b);
    if(a==0||b==0)
    {
        printf("division by zero\n");
    }
    else
    {
        printf("Hasil a / b adalah %.3f \n",a/b);
    }
    return 0;
}
