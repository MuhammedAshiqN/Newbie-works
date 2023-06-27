#include<stdio.h>
void main()
{
    int l,b,a,p;
    printf("Enter the length: ");
    scanf("%d",&l);
    printf("Enter the width: ");
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    printf("The area of the rectangle is %d and its perimeter is %d.",a,p);
}