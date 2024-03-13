#include<stdio.h>
int main()
{
    int x,j=0,f=0,t=0;
    scanf("%d",&x);
    j = x%10;
    while(x>=10)
    {
        x = x/10;
        
    }
    t = x+j;
    printf("%d",t);
}