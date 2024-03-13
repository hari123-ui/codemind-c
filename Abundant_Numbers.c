#include<stdio.h>
int main()
{
    int x,j=0,k=0;
    scanf("%d",&x);
    for(int i =1;i<x;i++)
    {
        j = x%i;
        if(j==0)
        {
            k =k+i;
        }
    }
    if(k>x)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}