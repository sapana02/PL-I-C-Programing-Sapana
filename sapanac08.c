/*
Program(8) Write a c program to swap two numbers using a temporary variable
Solution(2) User define values
*/
#include <stdio.h>
int main()
{
    int a,b,temp;

    printf("\n Enter first number:");
    scanf("%d",&a);

    printf("\n Enter secondnumber:");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("\n After swapping: \n");
    printf("\n First number=%d \n",a);
    printf("\n Second number=%d \n",a);

    return 0;
}
