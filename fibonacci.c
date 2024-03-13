#include<stdio.h>
int main()
{
    int a=0,y=0,z;
    scanf("%d",&z);
    for(int x = 0;x<=z-1;x++)
    {
        printf("%d ",a);
        if(a==0)
        {
            a = 1;
        }
        else
        {
            int b = a;
            a = a+y;
            y = b;
        }
    }
    
}