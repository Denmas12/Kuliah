#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    for(i=1;i<100;i+=2)
    {
        if(i%7==0||i%11==0)
        {
            continue;
        }
        else{
            printf("%d ", i);
        }
    }
    return 0;
}
