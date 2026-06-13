//enter address (house no,block,city,state) of 5 people

#include<stdio.h>

typedef struct address{
    int house_no;
    int block;
    char city[100];
    char state[100];
} adrs ;

int main(){

    adrs a1 = {1 , 10 , "meerut" , "uttar pardesh"};
    adrs a2 = {2 , 20 , "meerut" , "uttar pardesh"};
    adrs a3 = {3 , 30 , "meerut" , "uttar pardesh"};
    adrs a4 = {4 , 40 , "meerut" , "uttar pardesh"};
    adrs a5 = {5 , 50 , "meerut" , "uttar pardesh"};

    return 0;
}