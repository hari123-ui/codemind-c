#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x;j++)
        {
            if(j==i||j==(x-i)+1)
            {
            printf("%c",64+i);
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