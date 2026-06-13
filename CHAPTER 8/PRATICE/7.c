//WAF named slice which taked a string and return a slice string from index n to m 

#include<stdio.h>

void slice(char arr[] , int n , int m ){
    char array[100];
    int j = 0;

    for(int i = n ; i <= m ; i++, j++){
        array[j] = arr[i];
    }
    array[j] = '\0';
    puts(array);
}

int main(){

    int n,m,a;

    printf("enter the lenght of the string:");
    scanf("%d",&a);

    char string[a];

    printf("enter the string: ");
    scanf("%s",&string);

    printf("enter the string point of slice: ");
    scanf("%d",&n);

    printf("enter the ending point of slice: ");
    scanf("%d",&m);

    if(n < a && m < a){
        slice(string,n,m);
    }
    else{
        printf("enter valid input of m or n");
    }

    return 0;
}