#include<stdio.h>
int main ()
{
    double A, B, avg;
    scanf("%lf %lf", &A, &B);

    if(0<=A<=10 && 0<=B<=10)
    {
        avg=(A*3.5+B*7.5)/(3.5+7.5);
        printf("MEDIA = %.5lf\n", avg);
    }

    return 0;
}
