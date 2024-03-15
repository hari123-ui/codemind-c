#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x;j++)
        {
            if(i%2!= 0 || i == 1)
            {
                printf("0 ");
            }
            else if(i!=1)
            {
                printf("1 ");
            }
        }
        printf("
");
    }
}