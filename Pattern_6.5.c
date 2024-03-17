#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i =1;i<=x;i++)
    {
        for(int s=1;s<i;s++)
        {
            printf(" ");
        }
        for(int j=x;j>=i;j--)
        {
            printf("%c ",64+i);
        }
        printf("
");
    }
}