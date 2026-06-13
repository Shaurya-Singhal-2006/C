 //                                                       FUNCTIONS

// block of code that performs perticular task

// it can be used multiple times 
// increase code reusability

// function {prototype/ declaration}

//                                                          SYNTAX 1

// void printhello();

//                                                          SYNTAX 2

// function definition

//  void printhello(){
//    print("hello");
//  }

//                                                          SYNATAX 3

//function call

//  int main(){
//  printhello();
//  return 0;
//   }

#include<stdio.h>
//                       declaration/prototype
void printhello();

int main (){
    printhello();       //function call
    printhello(); 
    printhello(); 

    return 0;
}
// function definition
void printhello(){
    printf("hello!\n");
    printf("hello my name is shaurya\n");
}

//                                                                  PROPERTIES

// execution always start from main

// a function gets called directly or indirectly from main 

// there can be multiple function in a programme