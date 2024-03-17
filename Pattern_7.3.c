#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int y =1;
    for(int i=x;i>=1;i--)
    {
        for(int s=1;s<y;s++)
        {
            printf(" ");
        }
        for(int j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        y = y+1;
        printf("
");
    }
    return 0;
}