//                                                      PASSING ARGUMENT

// FUNCTION CAN TAKE VALUE & GIVE SOME VALUE 

// IT TAKES PARAMETER 
// IT GIVES OUT RETURN VALUE

//PASSING ARGUMENT 
//FOR EG

//void printhello();

// void printtable(int n);

//int sum(int a ,int b);



#include<stdio.h>

int sum(int a ,int b);                           //we have created a function 'sum'

int main(){

    int a,b; 

    printf("enter a number: ");
    scanf("%d",&a);

    printf("enter a number: ");
    scanf("%d",&b);

    int s = sum(a,b);                     //we have stored value of sum function in s
    printf("the sum is: %d\n",s);

    return 0;
}

int sum( int a , int b){               //'sum' function defination
    return a+b;
}


//EXAMPLE

#include<stdio.h>

void table(int n);

int main (){

    int n;

    printf("enter number: ");
    scanf("%d",&n);

    table(n);                      // argument

    return 0;
}
 
void table(int n){                // parameter
    for(int i = 1 ; i<=10 ; i++ ){
        int s = n*i;
        printf("%d\n",s);
    }
}

// argument 
// 1. values that are passed in function call
// 2. used to send value
// 3. actual parameter


//parameter
// 1. values in function declaration and defination 
// 2. used to recive value
// 3. formal parameter


//NOTE
// 1. function can only return one value at a time
// 2. changes to parameters in function dont change the value in calling function



//WAP to calculate area of a square, a circle and a rectangle

#include<stdio.h>

float squarearea(float a );
float circlearea(float a );
float rectanglearea(float a ,float b);

int main (){

    int a,b;

    squarearea(a);

    circlearea(a);

    rectanglearea(a,b);

    return 0;
}


float squarearea(float a){
    printf("enter length of one side: ");
    scanf("%f",&a);

    printf("the area of the square is: %.2f cm/sq\n",a*a);
}
float circlearea(float a){
    printf("enter radius of the circle: ");
    scanf("%f",&a);

    float pi = 3.14;

    printf("the area of the circle is: %.2f cm/sq\n",2*pi*a*a);
}
float rectanglearea(float a , float b){
    printf("enter length of rectangle: ");
    scanf("%f",&a);

    printf("enter breadth of rectangle: ");
    scanf("%f",&b);

    float area = a*b;

    printf("the area of the rectangle is: %.2f cm/sq\n",area);
}