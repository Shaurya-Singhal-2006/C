#include<stdio.h>

void table(int n);

int main (){

    int a,b;

    printf("enter number: ");
    scanf("%d",&a);

    printf("enter number: ");
    scanf("%d",&b);

    table(a);                      // argument
    
    table(b);

    return 0;
}
 
void table(int n){                // parameter
    for(int i = 1 ; i<=10 ; i++ ){
        int s = n*i;
        printf("%d\n",s);
    }
}