#include<stdio.h>
int primen(int );
int main()
{
    int a;
    printf("\nEnter Your Number=");
    scanf("%d",&a);
    primen(a);
    return 0;
}
int primen(int x)
{
    int c=0;
        for(int i=2; i<=x; i++)
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