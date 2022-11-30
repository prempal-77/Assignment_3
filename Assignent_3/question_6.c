/*Write a program to print greater between two numbers. Print one number if both are
the same.*/
// C program to find the greatest of two numbers

#include<stdio.h>
int main()
{
          int num1,num2;
          printf("Enter two number :");
          scanf("%d %d",&num1,&num2);
          if(num1>num2)
          printf("%d is greater than %d",num1,num2);
          else if(num1==num2)
          printf("Both are same");
          else
          printf("%d is greater than %d ",num2,num1);
          return 0;
}