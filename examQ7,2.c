/* Write a program to read and display the information of all
students in the class. Then edit the details of the i th student and
redisplay the entire information.
Note: Student Information: Roll No, Name, Course, YGPA. */

#include <stdio.h>
typedef struct
{
    int RollNo;
    char name[100];
    char course[100];
    double ygpa;
} student;
void read(student *stu)
{
    printf("enter the rollnumber of the student \n");
    fflush(stdin);
    scanf("%d", &stu->RollNo);
    printf("enter the name of the student \n");
    fflush(stdin);
    gets(stu->name);
    printf("enter the course of the student \n");
    fflush(stdin);
    gets(stu->course);
    printf("enter the ygpa of the student \n");
    fflush(stdin);
    scanf("%lf", &stu->ygpa);
}
void display(student *stu)
{

    printf("rollnumber %d \n", stu->RollNo);
    printf("name  ");
    puts(stu->name);
    printf("\n");
    printf("course  ");
    puts(stu->course);
    printf("\n");
    printf("ygpa  ");
    printf("%.2lf", stu->ygpa);
    printf("\n");
}
void edit(student *stu)
{
    int choice;
    

    printf("What do you want to edit? \n");
    printf("1. Roll number \n 2. name \n 3. course \n 4. ygpa  \n ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter new roll number \n");
        fflush(stdin);
        scanf("%d", &stu->RollNo);
    }
    else if (choice == 2)
    {
        printf("Enter new name \n");
        fflush(stdin);
        gets(stu->name);
    }
    else if (choice == 3)
    {
        printf("Enter new course \n");
        fflush(stdin);
        gets(stu->course);
    }
    else if (choice == 4)
    {
        printf("Enter new YGPA \n");
        fflush(stdin);
        scanf("%lf", &stu->ygpa);
    }
    else
    {
        printf("Invalid input");
    }
}

int main()
{
    int n, i, r;
    printf("Enter the number of students : - ");
    scanf("%d", &n);
    student s[10];
    for (i = 0; i < n; i++)
    {
        read(&s[i]);
    }
    printf("THE DETAILS ARE: \n");
    for (i = 0; i < n; i++)
    {
        display(&s[i]);
        printf("\n \n");
    }
    printf("Enter the roll number of the student whose details are to be modified \n");
    scanf("%d", &r);
    for (i = 0; i < n; i++)
    {
        if (r == s[i].RollNo)
        {
            edit(&s[i]);
            break;
        }
    }
    if (i == n)
        printf("student record not found \n");

    printf("Modified Values are \n");

    for (i = 0; i < n; i++)
    {
        display(&s[i]);
        printf("\n \n");
    }
}
