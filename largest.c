#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if (a>b)
      printf("The largest number is %d.",a);
    else
      printf("The largest number is %d.",b);    
}