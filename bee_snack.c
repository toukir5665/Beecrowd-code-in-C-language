#include<stdio.h>
int main()
{
    int X, Y;
    float sum;

    scanf("%d %d", &X, &Y);

    if(X==1)
    {
        sum=4*Y;
        printf("Total: R$ %.2f\n", sum);
    }
    else if(X==2)
    {
        sum=4.5*Y;
        printf("Total: R$ %.2f\n", sum);
    }
    else if(X==3)
    {
        sum=5*Y;
        printf("Total: R$ %.2f\n", sum);
    }
    else if(X==4)
    {
        sum=2*Y;
        printf("Total: R$ %.2f\n", sum);
    }
    else if(X==5)
    {
        sum=1.5*Y;
        printf("Total: R$ %.2f\n", sum);
    }


    return 0;
}
