#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=x;i>=1;i--)
    {
        for(int j=x;j>=1;j--)
        {
            if(j==i||j==(x-i)+1)
            {
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
    return 0;
}