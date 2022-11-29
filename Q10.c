#include<stdio.h>
int sumf(int x);
int fact(int);
int main()
{
    int x;
    printf("\nEnter Your Number=");
    scanf("%d",&x);
    sumf(x);
    return 0;
}
 int sumf(int a)
{
    int sum=0;
    if(a==0|| a==1)
     return 1;
     else
     for(int i=1;i<=a;i++)
     {
        sum=sum+fact(i);
     }
     printf("SUM=%d",sum);
     return 0;
    
}
int fact(int x)
{
    int f=1;
    for(int j=1;j<=x;j++)
    {
        f=f*j;
    }
    return f/x;
}