//WAP to store data of 3 students

#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){

    struct student s1;
    strcpy(s1.name,"shaurya");  
    s1.roll = 24;
    s1.cgpa = 9.0;

    printf("the name of the student is : %s\n",s1.name);
    printf("the roll no. of the student is: %d\n",s1.roll);
    printf("the cgpa of the student is: %.2f\n",s1.cgpa);
    printf("\n");

    struct student s2;
    strcpy(s2.name,"raghav");  
    s2.roll = 25;
    s2.cgpa = 9.2;
    
    printf("\n");
    printf("the name of the student is : %s\n",s2.name);
    printf("the roll no. of the student is: %d\n",s2.roll);
    printf("the cgpa of the student is: %.2f\n",s2.cgpa);
    printf("\n");

    struct student s3;
    strcpy(s3.name,"yash");  
    s3.roll = 26;
    s3.cgpa = 9.6;

    printf("\n");
    printf("the name of the student is : %s\n",s3.name);
    printf("the roll no. of the student is: %d\n",s3.roll);
    printf("the cgpa of the student is: %.2f\n",s3.cgpa);
    printf("\n");

    return 0;
}