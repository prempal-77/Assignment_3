//. Write a program to check whether a given number is positive or non positive
#include<stdio.h>
int main()
{
          int num;
          printf("Enter a number:");
          scanf("%d",&num);
          if(num>0)
          printf("number is positive");
          else if(num==0 )
          {
                    printf("num is zero");
          }
          
          else
          printf("number is non positive");
          return 0;


}