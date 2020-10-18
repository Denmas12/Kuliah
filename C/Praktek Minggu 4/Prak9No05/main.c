#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, bil, bensal;
    printf("Masukkan bilangan : \n");scanf("%d",&bil);
    for(i=2; i<bil; i++)
    {
        if(bil % i==0)
        {
            bensal = 0;
            break;
        }
        else
        {
            bensal = 1;
        }
    }
    if(bensal==0)
    {
        printf("%d Bukan bilangan adalah bilangan prima\n", bil);
    }
    else
    {
        printf("%d Bilangan adalah bilangan prima\n", bil);
    }
    return 0;
}
