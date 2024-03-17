#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int y = 64+x;
    for(int i=1;i<=x;i++)
    {
        for(int s=1;s<=x-i;s++)
        {
            printf(" ");
        }
        for(int j =1;j<=i;j++)
        {
            printf("%c ",y);
        }
        y = y-1;
        printf("
");
        
    }
    
}