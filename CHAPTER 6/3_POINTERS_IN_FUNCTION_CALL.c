//                                                  POINTERS IN FUNCTION CALL

// call by value -----> we pass value of variable as argument

// call by reference -----> we pass address of variable as argument



// call by value 

#include<stdio.h>

void square(int x){
    x = x*x;                            
    printf("the value is: %d\n",x);
}

int main (){

    int number = 10;
    square(number);                             // it make copies of value that is why the original value does not change
    printf("the ariginal number: %d\n",number);

    return 0;
}

//call by reference 

#include<stdio.h>

void _square(int* n){
    *n = (*n) * (*n);
    printf("the value is: %d\n",*n);
}

int main(){

    int number = 4;
    _square(number);                       //here the value will change of "number"
    printf("the number is : %d\n",number);

    return 0;
}





//swap two numbers

#include<stdio.h>

void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("now the value of a is %d ans the value of b is %d\n",a,b);
}

int main(){

    int a = 10;
    int b = 15;
    swap(a,b);
    printf("the original values are a= %d b=%d\n",a,b);

    return 0;
}