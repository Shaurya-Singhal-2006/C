// find thrr salted form of a password entered by the user if the salt is "123" and added at the end

//SALTING --> companies add random charachter in the our password so the hacker can not hack it easily

#include<stdio.h>
#include<string.h>

int main(){

    char pass[100];

    printf("please enter your password: ");
    scanf("%s",&pass);

    char salt[] = "123";

    printf("the password after salting is: %s\n",strcat(pass,salt));

    return 0;
}





