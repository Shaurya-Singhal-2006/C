#include<stdio.h>
#include<string.h>

struct student{
        char name[100];
        int roll;
        float cgpa;
    };

int main(){

    struct student SoCS[100];
    strcpy(SoCS[0].name,"shaurya");  
    SoCS[0].roll = 24;
    SoCS[0].cgpa = 9.0;

    printf("the name of the student is : %s\n",SoCS[0].name);
    printf("the roll no. of the student is: %d\n",SoCS[0].roll);
    printf("the cgpa of the student is: %.2f\n",SoCS[0].cgpa);

    return 0;
}