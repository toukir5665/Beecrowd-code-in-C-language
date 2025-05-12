#include<stdio.h>
int main()
{
    int n, i, al=0, gas=0, dis=0;

    for(; ; )
    {
        scanf("%d", &n);
        if(n<=0 || n>=5)
        {
            continue;
        }
        else if(5>n>0)
        {
            for(i=0; ; i++)
            {
                if(n==1)
                {
                    al++;
                }
                else if(n==2)
                {
                    gas++;
                }
                else if(n==3)
                {
                    dis++;
                }
            }
        }

       else if(n==4)
        {
            break;
        }

    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d", al, gas,dis);


    return 0;
}
