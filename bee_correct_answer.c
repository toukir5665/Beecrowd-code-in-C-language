#include<stdio.h>
int main()
{
    int i, n;

    scanf("%d", &n);
    int arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int j=0; j<n; j++)
    {
        printf("resposta %d: %d\n", j+1, arr[j]);
    }

    return 0;
}
