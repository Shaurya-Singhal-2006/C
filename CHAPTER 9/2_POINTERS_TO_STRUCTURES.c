//                               POINTERS TO STRUCTURES


// struct student s1;
//struct student *ptr;
// ptr = &s1;             in ptr address of s1 is stored


// (*ptr).roll can also be written as ptr->roll

#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float marks;
};

int main(){

    struct student s1 = { "shaurya", 24 , 95.5 };

    struct student *ptr = &s1;

    printf("roll number of s1 student is: %d\n",(*ptr).roll);
    printf("roll number of s1 student is: %d\n",ptr->roll);

    return 0;
}

//      ARROW OPERATOR( -> )

// (*ptr).roll can also be written as ptr->roll

