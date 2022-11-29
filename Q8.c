#include<stdio.h>
void pascal(int);
int main()
{
    int rows;
    printf("\nEnter the number of rows : ");
    scanf("%d",&rows);
        pascal(rows);
        return 0;
}
void pascal(int rows)
{
int  coef = 1, space, i, j;

printf("\n");

for(i=0; i<rows; i++)
{
for(space=1; space <= rows-i; space++)
printf("  ");

for(j=0; j <= i; j++)
{
if (j==0 || i==0)
coef = 1;
else
coef = coef*(i-j+1)/j;

printf("%4d", coef);
}
printf("\n\n");
}

}