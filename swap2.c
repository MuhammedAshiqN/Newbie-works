#include<stdio.h>
void main()
{
    int a,b;
    printf("Insert two numbers a and b: ");
    scanf("%d%d",&a,&b);
    printf("The numbers before swap: a=%d, b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The numbers after swap: a=%d, b=%d",a,b);
}