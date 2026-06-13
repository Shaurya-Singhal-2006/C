//                                         PASSING STRUCTURE TO FUNCTION

//EG

// void printinfo(struct student s1);

#include<stdio.h>

struct student{
    char name[100];
    int roll;
    float marks;
};

void getinfo(struct student s1){
    printf("the name of the student is: %s\n",s1.name);
}

int main(){

    struct student s1 = {"shaurya", 25 , 95.5};

    getinfo(s1);

    return 0;
}