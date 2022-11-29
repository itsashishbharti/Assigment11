#include<stdio.h>
int btwprime(int ,int);
int main()
{
    int a,b;
    printf("\nEnter Your Lowest number=");
    scanf("%d",&a);
    printf("\nEnter Your Lowest number=");
    scanf("%d",&b);
    btwprime(a,b);
    return 0;
}
int btwprime(int x,int y)
{
     int c=0;
        for(int i=x; i<=y; i++)
    {
        c = 1; 

        
        for(int j=2; j<=i/2; j++)
        {
            
            if(i%j==0)
            {
                c = 0;
                break;
            }
        }

        if(c==1)
        {
            printf("%d, ", i);
        }
    }
}
