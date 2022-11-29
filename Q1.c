#include<stdio.h>
int lcm(int,int);

int main() {

    int n1, n2,re;

    printf("Enter 1st positive integers: ");
    scanf("%d ", &n1);
     printf("\nEnter 2nd positive integers: ");
    scanf("%d ", &n2);
    re=lcm(n1,n2);
    printf("The LCM of %d and %d is %d.\n", n1, n2, re);
        return 0;
}
int lcm(int n1,int n2)
{
    
    int Lcm = (n1 > n2) ? n1 : n2;

    while (1) 
    {
        if ((Lcm % n1 == 0) && (Lcm % n2 == 0)) 
        {
            return Lcm;
            break;
        }
        Lcm++;
    }
}