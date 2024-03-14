#include<stdio.h>
int main()
{
    int x,r,l=0;
    scanf("%d",&x);
    while(x!=0)
    {
        r = x%10;
        if(r > l)
        {
            l =r;
        }
        x = x/10;
    }
    printf("%d",l);
    return 0;
}