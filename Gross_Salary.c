#include<stdio.h>
int main()
{
    int x;float da ,hra,t;
    scanf("%d",&x);
    if(x<10000)
    {
        da = (80/100.0)*x;
        hra = (20/100.0)*x;
        t = x+da+hra;
        printf("%.2f",t);
        
    }
    else if(x<=20000)
    {
        
        da = (90/100.0)*x;
        hra = (25/100.0)*x;
        t = x+da+hra;
        printf("%.2f",t);
    }
    else if(x>20000)
    {
        
        da = (95/100.0)*x;
        hra = (30/100.0)*x;
        t = x+da+hra;
        printf("%.2f",t);
    }
    return 0;
}