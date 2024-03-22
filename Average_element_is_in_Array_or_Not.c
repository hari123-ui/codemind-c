#include<stdio.h>
int main()
{
    int x,y=0,j=0;
    scanf("%d",&x);
    int array[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&array[i]);
        y = y+array[i];
    }
    j =y/x;
    int m=0;
    for(int i=0;i<x;i++)
    {
        if(j == array[i])
        {
            printf("True");
             m++;
            break;
           
        }
       
    }
    if(m==0)printf("False");
}