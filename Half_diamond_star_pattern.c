#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>2)
    {
    for(int i =1;i<=x;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("
");
    }
    for(int k=x-1;k>=1;k--)
    {
        for(int l=1;l<=k;l++)
        {
            printf("*");
        }
        printf("
");
    }
    }
    else
    {
        printf("The pattern is not possible");
    }
    
    return 0;
}