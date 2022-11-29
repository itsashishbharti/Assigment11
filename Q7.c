#include<stdio.h>
int  fibonacc(int);
int main()
{
    int n;
    printf("\nEnter Your Nth Number=");
    scanf("%d",&n);
    fibonacc(n);
    return 0;
}
int fibonacc(int x)
{
    int a=0,b=1,temp=0;
    printf("%d %d ",a,b);
    for(int i=2;i<=x;i++)
    {
        temp=a+b;
        printf("%d ",temp);
        a=b;
        b=temp;
        
    }
    return 0;
}