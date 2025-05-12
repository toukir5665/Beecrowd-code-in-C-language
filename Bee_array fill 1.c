#include<stdio.h>
int main()
{
    int V, n;
    scanf("%d", &V);

    for(int i=0; i<10; i++)
    {
        n=V*(i+1);
        printf("N[%d] =  %d\n", i, n);
    }

    return 0;
}
