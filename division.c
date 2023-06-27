#include<stdio.h>
void main()
{
    int a,b,q,r;
    printf("Enter the numbers: ");
    scanf("%d",&a,&b);
    q=a/b;
    r=a%b;
    printf("The quotient is %d and the remainder is %d.",q,r);
}