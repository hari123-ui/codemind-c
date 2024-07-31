#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d%d",&a,&b);
  int k,c= a%b;
  k=b-c;
  if(c==0)
  {
      printf("0");
  }else {
      printf("%d",k);
  }
 
 
}