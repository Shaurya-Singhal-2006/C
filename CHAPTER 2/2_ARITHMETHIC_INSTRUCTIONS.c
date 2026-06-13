//                                                     arithmetic instructions 

// A + B 

/*where 
A = OPERAND 1
B = OPERAND 2
+ = OPERATOR */

#include<stdio.h>
#include<math.h>              // used so we can user (POW)
int main(){

    int a,b;

    a = 5;
    b = 7;

    int sum = a+b;
    int subtract = a-b;
    int multiply = a*b;
    int divide = a/b;
    int power = pow(a,b);       // pow is used for power (a^b)    {we have to use (math.h) header file to use it}

    return 0;
}

//                                             [ modular operator (%) (tells remainder) ]

// for EG 

#include<stdio.h>
int main(){

    int a , b , modular;

    a = 30;
    b = 20;

    modular = a%b;                 // 30 % 20 ---> 10 

    printf("remainder is: %d \n", modular);

    return 0;
}

//                                                       [ type conversion ]

/* int        op     int           ------> int                 eg 2 * 2     -> 4
   int        op     float         ------> float               eg 2 * 2.0   -> 4.0
   float      op     float         ------> float               eg 2.0 * 2.0 -> 4.0      */ 
   
   

//                                                     [ operator precedence ]

// c  has its own operator precedence it does not folllow (BODMAS)

//    ( * , / , % )   --->   ( + , - )   --->   (=)  


#include<stdio.h>
int main (){

    int a , b , answer ;

    a = 5;
    b = 10;

    answer = a+7*b;                   // answer is 75 

    answer = 4 * 3 / 6 * 2           // same precedence   ( it will be solved from left to right )

 return 0;

}