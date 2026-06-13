//                             pointer arithmetic

//pointer can be incremented and decremented

//for eg

#include<stdio.h>
int main(){

    int age = 22;     //if a value 22 is stored 
    int *ptr = &age;
    printf("%u\n",ptr);
    ptr++;            //this will move to next block because this will add 4bytes 
    printf("%u\n",ptr);

    return 0;
}

//we can also subtract one pointer from another  (it should be of same datatype)

//we can also compare 2 pointers

//int *ptr = &arr[0];
                         //both are same thing
//int *ptr = arr;