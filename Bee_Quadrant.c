#include<stdio.h>
int main()
{
    int m,n,i;
    for(i=0; ; i++)
    {
        scanf("%d %d", &m, &n);
        if(m==0 || n==0)
        {
            break;
        }
        else if(m>0 && n>0)
        {
            printf("primeiro\n");
        }
        else if(m<0 && n>0)
        {
            printf("segundo\n");
        }
        else if(m<0 && n<0)
        {
            printf("terceiro\n");
        }
        else if(m>0 && n<0)
        {
            printf("quarto\n");
        }
    }

    return 0;
}
