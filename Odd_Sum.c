#include<stdio.h>
int main()
{
    int x,j=0;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<x;i++)
    {
        if(a[i]%2==1)
        {
            j= j+a[i];
        }
    }
    printf("%d",j);
}