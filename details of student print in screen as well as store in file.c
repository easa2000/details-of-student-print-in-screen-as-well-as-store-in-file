 // details of student print in screen as well as store in file
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    typedef struct student
    {
        int roll_no;
        char name[20];
        float fees;
        char DOB[10];
    }STUDENT;

    STUDENT stud1;
    system("cls");

    fp = fopen("student_details.dat","w");
    if(fp == NULL)
    {
        printf("\n File opening error");
        exit(1);
    }

    printf("\n Enter the roll number: ");
    scanf("%d",&stud1.roll_no);
    printf("\n Enter the name: ");
    getchar();
    gets(stud1.name);
    printf("\n Enter the fees: ");
    scanf("%f",&stud1.fees);
    printf("\n Enter the DOB: ");
    getchar();
    gets(stud1.DOB);

    // Print on the screen
    printf("\n ****** STUDENT'S DETAILS ******");
    printf("\n Roll no = %d",stud1.roll_no);
    printf("\n Name = %s",stud1.name);
    printf("\n Fees = %f",stud1.fees);
    printf("\n DOB : %s",stud1.DOB);

    // write to files

    fprintf(fp, " %d \n %s \n %f \n %s",stud1.roll_no ,stud1.name, stud1.fees, stud1.DOB);

    fclose(fp);
}
