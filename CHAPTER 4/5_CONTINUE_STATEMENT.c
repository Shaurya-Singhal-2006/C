//                                                       CONTINUE STATEMENT

// skip to next iteration

#include<stdio.h>
int main(){

    for(int i = 1 ; i <= 10 ; i++){
        if(i == 5 || i == 6){
            continue;
        }
        printf("%d\n",i);
    }while (1);

    return 0;
}