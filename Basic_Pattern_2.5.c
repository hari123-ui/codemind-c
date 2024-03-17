#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int y = 64+x;
    for(int i=x;i>=1;i--)
    {
        for(int j=i;j<=x;j++)
        {
            printf("%c ",y);
        }
        y=y-1;
        printf("
");
    }
}