#include<stdio.h>
int main()
{
    float n, sum=0, avg, count;

    for(int i=0; ; i++)
    {
        scanf("%f", &n);
        if(n>=0)
        {
            sum+=n;
            count++;
        }
        else if(n<0)
        {
            break;
        }

    }
    avg=sum/count;
    printf("%.2f\n", avg);

    return 0;
}
