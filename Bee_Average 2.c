#include<stdio.h>
int main()
{
    double A, B, C, avg;
    scanf("%lf %lf %lf", &A, &B, &C);

    if(0<=A<=10 && 0<=B<=10 && 0<=C<=10)
    {
        avg=(A*2+B*3+C*5)/(2+3+5);
        printf("MEDIA = %.1lf\n", avg);
    }

    return 0;
}
