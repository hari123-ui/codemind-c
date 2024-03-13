#include<stdio.h>
int main()
{
    int x,j=0,t=0,num =0;
    scanf("%d",&x);
    num = x;
    while(x!=0)
    {
        j = x%10;
        t= t*10+j;
        x = x/10;
      
        
    }
     
    if(t == num)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}