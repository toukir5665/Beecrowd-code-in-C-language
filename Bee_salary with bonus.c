#include <stdio.h>
int main()
{
    char name[40];
    double salary, item, bns, news;

    scanf("%s %lf %lf", name, &salary, &item);
    bns=item*0.15;
    news=salary+bns;
    printf("TOTAL = R$ %.2lf\n", news);

    return 0;
}
