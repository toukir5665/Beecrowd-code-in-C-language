#include<stdio.h>
int main()
{
    double n, result;

    scanf("%lf", &n);
    result=(4.0/3)*3.14159*n*n*n;
    printf("VOLUME = %.3lf\n", result);

    return 0;
}
