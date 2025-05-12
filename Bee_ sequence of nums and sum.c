#include<stdio.h>
int main()
{
    int M, N, i, sum=0, sum1=0;
    for(i=0; ;i++)
    {
        scanf("%d %d", &M, &N);
        if(M<N && M>0 && N>0)
        {
            for(i=M; i<=N; i++)
            {
                printf("%d ", i);
                sum += i;
            }
            printf("Sum=%d", sum);
        }
        else if (M>N && M>0 && N>0)
        {
            for(i=N; i<=M; i++)
            {
                printf("%d ", i);
                sum1 += i;
            }
            printf("Sum=%d", sum1);
        }
        else if(M<=0 || N<=0)
        {
            break;
        }
    }

    return 0;
}
