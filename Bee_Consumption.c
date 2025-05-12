#include<stdio.h>
int main()
{
    int X;
    float Y, dis;

    scanf("%d %f", &X, &Y);
    dis = X/Y;
    printf("%.3f km/l\n", dis);

    return 0;
}
