#include<stdio.h>
int main()
{
    int x=1, y=60;

    while(y >= 0)
    {
        printf("I=%d J=%d\n", x, y);
        x=x+3;
        y=y-5;
    }

    return 0;
}
