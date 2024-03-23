#include<stdio.h>
int main()
{
    int x,k,y=0,z=0;
    scanf("%d",&x);
    int array[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]%2==0)
        {
            y = y+array[i];
        }
        else
        {
            z = z+array[i];
        }
    }
    if(y>=z)
    {
        k = y-z;
        printf("%d",k);
    }
    else 
    {
        k = z-y;
        printf("%d",k);
    }
    
}