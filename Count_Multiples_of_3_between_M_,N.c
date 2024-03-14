#include<stdio.h>
int main()
{
    int x,y,j=0;
    scanf("%d%d",&x,&y);
    for(int i =x+1;i<y;i++)
    {
        if(i%3==0)
        {
            j++;
        }
    }
    printf("%d",j);
    return 0;
}