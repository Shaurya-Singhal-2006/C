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