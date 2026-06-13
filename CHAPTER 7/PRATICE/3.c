//marks of two student stored in a multidimentional array

#include<stdio.h>
int main (){

    int marks[3][3]={{80,85,90},{90,95,100}};

    marks[0][0]=80; //first sub
    marks[0][1]=85; //second sub
    marks[0][2]=90; //third sub

    marks[1][0]=90; //ifrst sub
    marks[1][1]=95; //second sub
    marks[1][2]=100; //third sub

    printf("%d \n",marks[1][2]);
}