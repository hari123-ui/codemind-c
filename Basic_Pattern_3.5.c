#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i =x;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c ",j+64);
        }
        printf("
");
    }
}