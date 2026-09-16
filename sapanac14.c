/*Program(14)= Write a program to generate the multiplication of any number using while loop ang for loop.
Solution(1): Using while loop*/

#include<stdio.h>
int main()
{
int num, i=1;

printf(" Enter a number:");
scanf("%d",&num);

printf("\n Multiplication Table of%d\n",num);

while(i<=10)
{
printf("%d*%d=%d\n",num,i,num*i);
i++;
}
return 0;
}
