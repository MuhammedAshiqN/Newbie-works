#include<stdio.h>
void main()
{
    int r,a,c;
    printf("Enter the radius: ");
    scanf("%d",&r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("The area of the rectangle is %d and its perimeter is %d.",a,c);
}