// print numbers from 0 to 10

#include<stdio.h>
int main (){

    int i;

    for(i = 0 ; i <= 10 ; i = i + 1){     // we can write i++ insted of i = i + 1 (works only for +1)
        printf("%d\n",i);
    }

    return 0;
}