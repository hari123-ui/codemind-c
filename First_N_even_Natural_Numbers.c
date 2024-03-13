#include<stdio.h>
int main()
{
    int x,j=0;
    scanf("%d",&x);
    for(int i=x*2;i>=1;i--)
    {
        j = i%2;
        if(j==0 )
        {
            printf("%d ",i);
        }
        
    }
    return 0;
}