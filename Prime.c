#include<stdio.h>
int main()
{
    int x,j=0;
    scanf("%d",&x);
    for(int i =2;i<x;i++)
    {
       if(x%i == 0)
       {
           j++;
       }
    }
     
         if(j == 0)
         {
             printf("Prime");
         }
         else
         {
             printf("Not Prime");
         }
    return 0;
}