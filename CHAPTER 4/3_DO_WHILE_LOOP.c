//                                                    DO WILL LOOP

//  do{
//  do something 
// } while(condition);

#include<stdio.h>
int main (){

    int i = 1;

    do{
        printf("%d\n",i);
        i++;
    }while (i<=10);        //use while(1) for infinite loop

    return 0;
}