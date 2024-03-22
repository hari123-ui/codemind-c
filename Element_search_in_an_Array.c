#include<stdio.h>
int main()
{
    int x,y,m=0;
    scanf("%d",&x);
    int array[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&array[i]);
    }
    scanf("%d",&y);
    for(int i=0;i<x;i++)
    {
        if(y == array[i])
        {
            printf("True");
            m++;
            break;
        }
        
    }
    if(m==0)
    {
        printf("False");
    }
    
    
}