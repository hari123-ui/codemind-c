#include<stdio.h>
int main()
{
    int x,z=0;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        {
            z = a[i];
        }
    }
    printf("%d",z);
    
}