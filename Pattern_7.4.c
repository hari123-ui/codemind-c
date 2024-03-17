#include<stdio.h>
int main()
{
    int x,y=1;
    scanf("%d",&x);
    for(int i=x;i>=1;i--)
    {
        for(int s =1;s<y;s++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%c ",64+i);
        }
        y =y+1;
        printf("
");
    }
}