//                            STRUCTURES

// a collection of valuesof different data types

// EXAMPLE 
// for a student we can store
/*

name(string)
roll. no.(integer)
marks (float)

*/

//FOR EG

#include<stdio.h>
#include<string.h>

struct student{
        char name[100];
        int roll;
        float cgpa;
    };

int main(){

    struct student s1;
//    s1.name = "shaurya"; this wil not work so we have to use 
    strcpy(s1.name,"shaurya");  
    s1.roll = 24;
    s1.cgpa = 9.0;

    printf("the name of the student is : %s\n",s1.name);
    printf("the roll no. of the student is: %d\n",s1.roll);
    printf("the cgpa of the student is: %.2f\n",s1.cgpa);

    return 0;
}

// structure is a user-defined data type

/*

struct student {

char name[100];   memory(eg) 2010 
int roll;         memory(eg) 2110  [100 value is added becuase of 100 char] 
float cgpa;       memory(eg) 2114
}

*/


//ADVANTAGES

// 1. saves us from creating too many array 
// 2. good data managment and organisation


//ARRAY OF STRUCTURE

/*

struct student ECE[100];
struct student COE[100];
struct student IT[100];

*/

//HOW TO ACCESS

/*

IT[0].roll = 200;
IT[0].cgpa = 7.6;

*/

// INITIALIZING STRUCTURES

// struct student s1 = {"shaurya" , 24 , 9.0 };

//to access it 

// printf("%d\n",s1.roll);
