#include<stdio.h>
int main()
{
    int x,j=0;
    scanf("%d",&x);
    for(int i = 1;i<x;i++)
    {
        j = i%2;
        if(j ==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}