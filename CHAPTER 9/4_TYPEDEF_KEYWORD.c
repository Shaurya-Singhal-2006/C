//                                  TYPEDEF KEYWORD

// used to create alise for data types

//it helps to create nickname of struct function

/*

typedef struct engineeringstudent{
char name[100];
int roll;
float marks;
} stu;

stu s1;

*/

#include<stdio.h>

typedef struct computerengineeringstudent{
    char name[100];
    int roll;
    float marks;
}stu ;

int main(){

    stu s1 = {"shaurya" , 24 , 95 };
    stu s2 = {"raghav" , 25 , 96 };
    stu s3 = {"yash" , 26 , 97 };

    return 0;
}

// if we want to make struct array we can make it by this 

// struct address[5]; example