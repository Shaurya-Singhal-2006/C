// write 2 function one to print "hello" and second to print "good bye"

#include<stdio.h>

void a();
void b();

int main (){

    a();
    b();
    a();
    b();

    return 0;
}

void a(){
    printf("hello!\n");
}
void b(){
    printf("good bye!\n");
}