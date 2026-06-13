// WAP to print the smallest number

#include<stdio.h>
 int main(){

   int a,b,answer;

   printf("enter first number:");
   scanf("%d",&a);

   printf("enter the second number:");
   scanf("%d",&b);

   if(a<b){
      printf("a is smaller than b");
   }
   else{
      printf("b is smaller than a");
   }

   return 0;
}