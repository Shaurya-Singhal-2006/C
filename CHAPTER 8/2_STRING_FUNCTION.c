//                               IMPORTANT 

//scanf() cannot input multi word string with spaces

// here we use { gets() and puts() } come in picture
//              ___________________


// gets(str) --> dangerous and outdated  (it is used to take input)

//puts(str)  --> output a string

//fgets(str,n,file) --> stops when n-1 char input or new line is entered

// at the place of file we use (stdin) --> (standard input) 

#include<stdio.h>
int main(){

    char name[100];

    printf("enter your name: ");
    fgets(name , 100 , stdin);

    puts(name);

    return 0;
}

    