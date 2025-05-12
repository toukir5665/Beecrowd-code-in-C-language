#include<stdio.h>
int main()
{
    int a, b;
    float f;

    scanf("%d %d %f", &a, &b, &f);
    printf("NIMBER = %d\nSALARY = U$ %0.2f\n", a, b*f);

    return 0;
}
