#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    for(int i =y;y<=z;y++)
    {
       int j = x*y;
        printf("%d x %d = %d
",x,y,j);
         
    }
    return 0;
}