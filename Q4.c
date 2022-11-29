#include<stdio.h>
#include<stdlib.h>
int nextprm(int );
int main()
{
    int a,re;
    printf("\nEnter Your Number =");
    scanf("%d",&a);
    nextprm(a);
   re=nextprm(a);
  printf("\n Next Prime Number of %d is %d",a,re);
    return 0;
}
int nextprm(int n)
{
    int i,j,c=0;
   for(i=n+1;i<=n*2;i++)
   {

      c=0;

      for(j=2;j<i;j++)
      {
         if(i%j==0)
         {
            c=1;
            break;
         }
      }

      if(c==0)
      {
         return i;
         break;
      }
   }
}