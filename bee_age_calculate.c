#include<stdio.h>
int main()
{
    int n, yr, mn, ds;

    scanf("%d", &n);

    yr=n/365;
    mn=(n-(yr*365))/30;
    ds=n-((yr*365)+(mn*30));

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", yr, mn, ds);

    return 0;
}
