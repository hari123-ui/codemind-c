#include<stdio.h>
int main()
{
    int x;float y=0;
    scanf("%d",&x);
    int array[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&array[i]);
        y = y+array[i];
    }
    
    float j = y/x;
    printf("%.2f",j);
}