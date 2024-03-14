#include<stdio.h>
int main()
{
    int x,r=0,t=0,k=1;
    scanf("%d",&x);
    while(x!=0)
    {
        r = x%10;
        t = t +r;
        k = k *r;
        x = x/10;
    }
    if(t == k)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}