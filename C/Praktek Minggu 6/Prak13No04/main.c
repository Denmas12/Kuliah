#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, ha, hb;
    printf("Masukkan bilangan : ");scanf("%d", &i);
    ha = cn(i);
    hb = sn(i);
    printf("Hasil Cn = %d\n",ha);
    printf("Hasil Sn = %d\n",hb);
    return 0;
}

int cn(int a)
{
    int i, hasil=1;
    for(i=0;i<a;i++)
    {
        hasil=2*hasil+1;
    }
    return hasil;
}

int sn(int b)
{
    int i, hasil=1;
    for(i=0;i<b;i++)
    {
        hasil=hasil+b-1;
    }
    return hasil;
}
