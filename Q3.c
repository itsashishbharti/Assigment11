#include<stdio.h>
int checkprm(int );
int main()
{
    int a,re;
    printf("\nEnter Your Number =");
    scanf("%d",&a);
    re=checkprm(a);
    if(re==5)
    {
        printf("\nNumber is Prime");
    }
    else
    {
        printf("\nNumber is Not Prime");
    }
    return 0;

}
int checkprm(int n)
{
    int i,c=0;
        if (n == 0 || n == 1)
    c = 1;

  for (i = 2; i <= n / 2; ++i) {

    if (n % i == 0) {
     c = 1;
      break;
    }
  }
  if (c == 0)
  {
    int d=5;
    return d;
  }
}