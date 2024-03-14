#include<stdio.h>
int main()
{
    int x,y,j =0,k=0,m=0,n=0;
    scanf("%d%d",&x,&y);
    for(int i = 1;i<x;i++)
    {
        j= x%i;
        if(j == 0)
        {
            k = k+i;
        }
    }
    for(int l = 1;l<y;l++)
    {
        m = y%l;
        if(m == 0)
        {
            n = n+l;
        }
    }if(k == y && n == x)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
    return 0;
    
}