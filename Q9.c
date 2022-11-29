#include<stdio.h>
int square(int);
int main()
{
    int a;
    printf("\nEnter Your Number=");
    scanf("%d",&a);
    int re=square(a);
    printf("\n Square of %d is %d",a,re);
    return 0;
}
int square(int x)
{
    return (x*x);
}