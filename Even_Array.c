#include<stdio.h>
int main()
{
    int x,y=0;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2 == 0)
        {
            y += 1;
        }
    }

    if(y == x)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}