//                                               RECURSION

//WHEN A FUNCTION CALLS ITSELF, IT'S CALLED RECURSION 

#include<stdio.h>

void printHW(int n);

int main (){

    printHW(5);

    return 0;
}// recursive function

void printHW(int n){

    if(n==0){
        return ;
    }
    printf("hello world\n");
    printHW(n-1);
}


// sum of first n natural numbers

#include<stdio.h>

int sum(int n);

int main(){

    int n;

    printf("enter number: ");
    scanf("%d",&n);
    
    printf("%d",sum(n));

    return 0;
}

int sum(int n){
    if(n==1){
        return 1;
    }
    int totalvalue = sum(n-1);
    int finalvalue = totalvalue +n;
    return finalvalue;
}

// a. anything that can be done with iteration can be done with recursion and vice versa
// b. recursion can sometimes give the most simple solution
// c. base case is the condition which stops recursion
// d. iteration has infinite loop and recursion has stack overflow