#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Insert two numbers a and b: ");
    scanf("%d%d",&a,&b);
    printf("The numbers before swap: a=%d, b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("The numbers after swap: a=%d, b=%d",a,b);
}