#include<stdio.h>
int main()
{
    int x,y =0;
    scanf("%d",&x);
    int c = x/5;
    if(x<=5)
    {
        printf("1");
    }
    else if(x%5 != 0)
    {
        printf("%d",c+1);
    }
    else
    {
        printf("%d",c);
    }
    
    
}