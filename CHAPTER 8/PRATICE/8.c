//WAF to count the occurance of vowels in a string 

#include<stdio.h>

void vowel(char array[]){
    int count = 0;
    for(int i = 0 ; array[i] != '\0' ; i++){
        if(array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u'){
            count++;
        }
    }
    printf("the number of vowels in the string is: %d\n",count);
}

int main(){

    char string[100];

    printf("enter a string: ");
    fgets(string , 100 , stdin);

    vowel(string);

    return 0;
}