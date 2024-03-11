#include<stdio.h>
int main()
{
    int x,j,k,l;
    scanf("%d",&x);
     j = x%3;
     k = x%5;
     l = x%7;
     if(j ==0 )
     {
         printf("Pling");
     }
     if(k == 0)
     {
         printf("Plang");
     }
     if(l == 0)
     {
         printf("Plong");
     }
     else if(j!=0&&k!=0&&l!=0)
     {
         printf("%d",x);
     }
     return 0;
}