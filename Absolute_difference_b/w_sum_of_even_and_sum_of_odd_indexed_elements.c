#include<stdio.h>
int main()
{
    int x,y=0,z=0;
    scanf("%d",&x);
    int array[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&array[i]);
        if(i%2==0)
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
        printf("%d",y-z);
    }
    else
    {
        printf("%d",z-y);
    }
    
}