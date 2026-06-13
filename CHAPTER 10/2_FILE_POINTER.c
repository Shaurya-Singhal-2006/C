//                       FILE POINTER

// FILE is a (hidden) structure that needs to be created for opening a file

// a FILE ptr that points to this structure and is used to access the file.

//FILE *fptr; (we can write anything onsted of fptr)

// OPENING AND CLOSING OF A FILE 

//FILE *fptr;
// fptr = fopen("filename" , mode);    mode --> read,write,etc. 

//CLOSING

//fclose(fptr);


#include<stdio.h>
int main(){

    FILE *fptr;
    fptr = fopen("test.txt" , "r");
    fclose(fptr);

    return 0;
}

//FILE OPENING MODES    
/*
"r" open to read
"rb" open to read in binary
"w" open to write
"wb" open to write in binary
"a" open to append
*/

// "r" and "rb" will give null value if the file does not exist
// "w" "wb" they will create the file if it does not exist
// "a" append means adding new data to old one 