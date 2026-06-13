//                       WRITTING TO A FILE

//char ch = 'a';
//fprintf(fptr,"%c",ch);

#include<stdio.h>
int main(){

    FILE *fptr;
    fptr = fopen("test.txt","w");

    fprintf(fptr,"%c",'B');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'A');

    fclose(fptr);

    return 0;
}

// READ ANS WRITE A CHAR 

// fgetc(fputr);           READ
// fputc('A' , fgets)      WRITE

//read a file

#include<stdio.h>
int main(){

    FILE *fptr;
    fptr = fopen("test.txt","r");

    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));

    fclose(fptr);

    return 0;
}


//write in a file

#include<stdio.h>
int main(){

    FILE *fptr;
    fptr = fopen("test.txt","w");

    fputs("b",fptr);
    fputs("a",fptr);
    fputs("n",fptr);
    fputs("a",fptr);
    fputs("n",fptr);
    fputs("a",fptr);

    fclose(fptr);

    return 0;
}