#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i =x;i>=1;i--)
    {
        for(int j =1;j<=x;j++)
        {
            if(j<=i)
            {
            printf("%d",j);
            }
            else
            {
            printf("*");
            }
        }
        printf("
");
    }
    return 0;
}