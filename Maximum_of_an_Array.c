#include<stdio.h>
int main()
{
    int x,j=0;
    scanf("%d",&x);
    int array[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&array[i]);
    }
     j=array[0];
    for(int i=0;i<x;i++)
    {
       
        if(array[i]>j)
        {
            j = array[i];
        }
    }
    printf("%d",j);
}