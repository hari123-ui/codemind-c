#include<stdio.h>
int main()
{
    int a,b,g;
    scanf("%d%d",&a,&b);
    if(b>a){
    int c=b-a;
    if(c==0)
    {
        printf("0");
    }else if(c<=10)
    {
        printf("1");
    }else if(c%10!=0)
    {
        int d=c/10;
        printf("%d",++d);
    }else {
        if(c%10==0)
         g=c/10;
        printf("%d",g);
    }
        
    }
        else {
            int c=a-b;
    if(c==0)
    {
        printf("0");
    }else if(c<=10)
    {
        printf("1");
    }else if(c%10!=0)
    {
        int d=c/10;
        printf("%d",++d);
            
        }else {
            if(c%10==0)
             g=c/10;
            printf("%d",g);
        }
        }
    
}