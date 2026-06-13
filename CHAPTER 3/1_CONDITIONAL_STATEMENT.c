//                                                         CONDITIONAL STATEMENT

//                                                                IF-ELSE 

//      if (condition){
//          do something if true
//    }

//      else{
//          do something if false
//    }

#include<stdio.h>
 int main (){

    int age ;

    printf("enter age:");
    scanf("%d",&age);

    if(age >= 18){
        printf("adult \n");
    }
    else {
        printf("not adult\n");
    }

    return 0;
}
    
//                                                               ELSE IF 

//      if (condition){
//          do something if true
//    }

//      else if{
//          do something if first is false and 2nd is true 
//    }

#include<stdio.h>
 int main (){

    int age ;

    printf("enter age :");
    scanf("%d",&age);

    if(age >= 18){
        printf("adult");
    }
    else if (age > 13 && age < 18){
        printf("teenager");
    }
    else{
        printf("child");
    }

    return 0;
}