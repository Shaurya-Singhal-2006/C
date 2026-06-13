// create a 2D array storing the table of 2 and 3 

#include<stdio.h>
int main(){

    int table[2][10] = {{},{}};

    for(int i = 0 ; i <=1 ; i++){
        for(int j = 0 ; j <= 9 ; j++){
            if(i == 0){
                table[i][j] = 2*(j+1);
            }
            if(i == 1){
                table[i][j] = 3*(j+1);
            }
        }
    }

    for(int i = 0 ; i <=1 ; i++){
        for(int j = 0 ; j <=9 ; j++){
            printf("%d ",table[i][j]);
        }
        printf("\n");
    }

    return 0;
}