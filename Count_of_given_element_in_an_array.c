#include<stdio.h>
int main()
{
    int x,z,y =0;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&z);
    for(int i=0;i<x;i++)
    {
        if(a[i]==z)
        {
            y +=1;
        }
    }
    printf("%d",y);
}