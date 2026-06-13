//make a program to input student information from a user and enter it to a file

#include<stdio.h>
int main(){

    FILE *fptr;
    fptr = fopen("student.txt","w");

    char name[100];
    int age;
    float marks;

    printf("enter student name: ");
    scanf("%s",&name);

    printf("enter the age of the student: ");
    scanf("%d",&age);

    printf("enter the marks of the student: ");
    scanf("%f",&marks);

    fprintf(fptr,"name of student: %s\n",name);
    fprintf(fptr,"age of student: %d\n",age);
    fprintf(fptr,"marks obtained by the student: %.1f",marks);

    fclose(fptr);

    return 0;
}