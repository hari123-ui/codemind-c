#include<stdio.h>
int main()
{
    int x,r =0,t =0,num=0;
    scanf("%d",&x);
     num = x;
    while(x!=0)
    {
        r = x%10;
        t = (t*10)+r;
        x = x/10;
    }
    if(t == num )
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}