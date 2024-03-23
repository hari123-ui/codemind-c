#include<stdio.h>
int main()
{
    int x,m=0,y=0;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
        
    }
    y = a[0];
    for(int i=0;i<x;i++)
    {
        if(a[i]%2==0)
        {
            if(a[i]>=y)
            {
                y = i;
            }
            else
            {
                printf("%d",i);
                m++;
                break;
            }
        }
    }
    if(m==0)
    printf("%d",y);
    
}