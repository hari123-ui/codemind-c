#include<stdio.h>
int main()
{
    int x,r=0,t=0;
    scanf("%d",&x);
    while (x != 0)
    {
        r = x%10;
        t = t+r;
        x = x/10;
        
    }
    printf("%d",t);
    
}