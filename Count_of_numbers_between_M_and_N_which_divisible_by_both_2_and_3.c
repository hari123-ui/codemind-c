#include<stdio.h>
int main()
{
    int x,y,j=0,k=0,m=0;
    scanf("%d%d",&x,&y);
    for(int i=x+1;i<y;i++)
    {
        j = i%2;
        k =i%3;
        if(j==0 && k==0)
        {
            m++;
        }
    }
    printf("%d",m);
    return 0;
}