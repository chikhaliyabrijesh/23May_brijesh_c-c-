#include<stdio.h>
#include<conio.h>
struct employee
{
   int  no;
   char name[20];
   int  age;
   char address[50];

}emp[5];

void main()
{
   int i;

   clrscr();

   printf("enter the details of 5 employees : ");
   printf("\n.................................");

   for(i=0;i<5;i++)
   {
       printf("\nenter the employee's no : ");
       scanf("%d",&emp[i].no);
       printf("\nenter the employee's name : ");
       scanf("%s",&emp[i].name);
       printf("\nenter the employee's age : ");
       scanf("%d",&emp[i].age);
       printf("\nenter the employee's address : ");
       scanf("%s",&emp[i].address);

   }

   printf("\nthe details of 5 employees are : \n ");

   for(i=0;i<5;i++)

   {
       printf("\nemployee's no : %d",emp[i].no);
       printf("\nemployee's name : %s",emp[i].name);
       printf("\nemployee's age  : %d",emp[i].age);
       printf("\nemployee's address : %s",emp[i].address);
   }

getch();

}