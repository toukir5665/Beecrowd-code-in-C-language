#include<stdio.h>
int main()
{
    int N, i;
    scanf("%d", &N);

    if(N<10000)
    {
        for(i=0; i<=10000; i++)
        {
            if(i%N==0)
            {
                printf("%d\n", i+2);
            }
        }
    }

    return 0;
}
