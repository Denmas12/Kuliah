#include <stdio.h>
#include <stdlib.h>

int triangular(int n)
{
    int i=1, hasil=0;
    for(i=n;i>=1;i--)
    {
        hasil+=i;
        printf("%d",i);
        if(i!=1){
            printf(" + ");
        }
    }
    printf(" = %d\n",hasil);
    printf("Hasil triangular dari %d adalah %d\n",n, hasil);
}

int main()
{
    int a;
    printf("Masukkan bilangan triangular : ");scanf("%d",&a);
    triangular(a);
    return 0;
}
