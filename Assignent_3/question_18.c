/* Write a program which takes the month number as an input and display number of
days in that month.*/
#include<stdio.h>
int main()
{
          int month;
          printf("Enter month number:");
          scanf("%d",&month);
          if(month==1 || month==3 || month==7 || month==8 || month==12)
          {
                    printf("31 days");

          }
          else if(month==4 || month==9 || month==11)
          {
                    printf("30 days");
          }
          else if(month==2)
          {
                    printf("28/29 days");
          }
          else{
                    printf("please enter valid month");
          }
          return 0;
}