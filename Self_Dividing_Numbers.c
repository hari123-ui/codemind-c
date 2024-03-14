#include<stdio.h>
int main()
{
    int x,y,i,j,k;
    scanf("%d%d",&x,&y);
    for(int l = x;l<=y;l++)
    {
        k = 1;
        j = l;
        while(j >0)
        {
        if((j%10)==0||l%(j%10) != 0 )
        {
            k = 0;
            break;
        }
        j = j/10;
        }
         if(k ==1)
         {
             printf("%d ",l);
         }
         
        
    }
    return 0;
}