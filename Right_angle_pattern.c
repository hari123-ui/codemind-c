#include<stdio.h>
int main()
{
        int a,b,i,j,c,d=1,e,f;
        scanf("%d%d",&a,&b);
         c=(a*(a+1))/2;
         c--;
    c=c+b;
        for(i=1;i<=a;i++)
        {
        for(j=1;j<i;j++)
        {
            printf("  ");
        }
        for(j=a;j>=i;j--,c--)
        {
            if(i==1||i==j||j==a)
            {
                printf("%d ",c);
            }
            else
            {
                printf("  ");
            }
        }
                printf("
");
        }
}