#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char huruf;
    printf("Masukkan Huruf/Kalimat : ");
    for(;;)
    {
        huruf=getchar();
        if(huruf=='\n')
        {
            break;
        }
    }
    return 0;
}
