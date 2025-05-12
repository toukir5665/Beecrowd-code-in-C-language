#include<stdio.h>
int main()
{
    int i, n;
    float X, Y, result;

    for(i=0; i<n; i++)
    {
        scanf("%f %f", &X, &Y);
        if(Y<0 || Y>0)
        {
            result=X/Y;
            printf("%.1f\n", result);
        }
        else
        {
            printf("divisao impoossivel\n");
        }
    }


    return 0;
}
