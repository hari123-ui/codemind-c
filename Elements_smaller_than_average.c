#include<stdio.h>
int main()
{
    int x,y=0,z=0,j=0;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
        y =y+a[i];
    }
    j =y/x;
    for(int i=0;i<x;i++)
    {
        if(a[i]<=j)
        {
            z++;
        }
    }
    printf("%d",z);
}