#include<stdio.h>
int main()
{
    int x;float k=0.0;
    scanf("%d",&x);
    if(x<200.0)
    {
        x = x*1.20;
        printf("%.2f",x+100.0);
    }
    else if(x>=200.0&&x<400.0)
    {
        x = x*1.50;
        printf("%.2f",x+100.0);
    }
     else if(x>=400.0&&x<600.0)
    {
                k= (15.0*x)/100.0;
        x = x*1.80;
        printf("%.2f",x+k);
    }
    else
    {
        x=x*2.0;
        k= (15.0*x)/100.0;
        printf("%.2f",x+k);
    }
    return 0;
}