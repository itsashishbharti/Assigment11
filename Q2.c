#include<stdio.h>
int hcf(int,int);
int main()
{
    int a,b,re;
    printf("Enter Your First Number=");
    scanf("%d",&a);
    printf("\nEnter Your Second Number=");
    scanf("%d",&b);
    re=hcf(a,b);
    printf("\n HCF Of %d and %d=%d",a,b,re);
   
    return 0;
}
int hcf(int a,int b)
{
    int hcf,res;
     hcf=(a<b)?a:b;
    for(int i=1;i<=hcf;i++)
    {
        if(a%i==0 && b%i==0)
        {
            res=i;
        }
    }
    return res;
}