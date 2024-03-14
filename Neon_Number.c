#include<stdio.h>
int main()
{
    int x,k =0,l =0,j =0;
    scanf("%d",&x);
    j = x*x;
    while(j!=0)
    {
        k = j%10;
        l = l +k;
        j = j/10;
    }
    if(l == x)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}