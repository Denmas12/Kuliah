#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char huruf;
    printf("Masukkan Huruf : ");
    while(huruf!='X')
    {
        scanf("%c", &huruf);
    }
    printf("Program berhenti karena huruf X\n", huruf);
    return 0;
}
