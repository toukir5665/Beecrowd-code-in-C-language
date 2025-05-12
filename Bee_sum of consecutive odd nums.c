#include<stdio.h>
int main()
{
    int X, Y, i,j,n, sum=0;

    scanf("%d %d", &X, &Y);
    if(X<Y)
    {
        for(i=X; i<=Y; i++)
        {
            if(i%2==0)
            {
                sum+=i+1;
            }
        }
    }
    printf("%d", sum);

    return;
}
