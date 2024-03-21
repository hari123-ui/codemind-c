#include<stdio.h>
int main()
{
    int x ,j=0;
    scanf("%d",&x);
    int array[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<x;i++)
    {
        if(array[i]%2==0)
        {
            j=j+array[i];
        }
    }
    printf("%d",j);
}