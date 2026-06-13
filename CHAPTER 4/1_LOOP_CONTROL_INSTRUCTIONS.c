//                                                   LOOP CONTROL INSTRUCTIONS

// to repeat some parts of the program

//                                                          FOR LOOP 

//    FOR (initilisation;condition;updation){
//    do something 
//    }

#include<stdio.h>
int main (){

    for(int i=1; i<=10;i = i + 1){   //  i is known as (iterator ; counter)
        printf("hello world\n");     // we can write i++ insted of i = i + 1 (works only for +1)
    }                                

    return 0;
}

// i++       (use ,then increase)       {post increment}

// ++i       (increase , then use)      {pre increment}

// i--       (use ,then increase)       {post decrement}

// --i       (increase , then use)      {pre decrement}



// it can also be a float value as well as character


#include<stdio.h>
int main (){

    char i;

    for(i = 'a' ; i <= 'z' ; i = i + 1 ){
        printf("%c \n",i);
    }

    return 0;
}


// infinte loop 

#include<stdio.h>
int main (){

    int i;

    for(i = 0 ;  ; i = i + 1){
        printf("hello world");     // this loop will not stop and will keep printing (hello world) untill we stop 
    } 

    return 0;
}


#include<stdio.h>
int main (){

    int n , sum ;

    sum = 0;
    

    printf("enter number:");
    scanf("%d", &n);

    for( int i = 1 ; i<=n ;i = i + 1){
        sum = sum + i;
    }
    
    printf("%d",sum);

    for(int i = n ; i>= 1 ; i--){
        printf("%d\n",i);
    }

    return 0;
}