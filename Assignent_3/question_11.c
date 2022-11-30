/* Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed*/
#include<stdio.h>
int main()
{
          int sub1,sub2,sub3,sub4,sub5,total;
          float per;
          printf("Enter subject number:\n");
          scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
          total=sub1+sub2+sub3+sub4+sub5;
          printf("Total marks of student is %d\n",total);
          if(sub1>=33 && sub2>=33 && sub3>=33 && sub4>=33 && sub5>=33)
          {
                    printf("student is pass\n");
                    per=total/5.0;
                    printf("percentage of marks is %.2lf\n",per);
          }
          else
          printf("student is fail");
          return 0;

}