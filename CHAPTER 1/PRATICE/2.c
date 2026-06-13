// WAP to calculatre area of a square (side is given)

#include<stdio.h>
int main(){

  int side , area;

  side = 20 ;

  area = side*side;

  printf("the area of the square is: %d cm square \n ",area);

  return 0;

}

// side is taken as an input by the user


#include<stdio.h>
 int main (){
    
    float side, area;

    printf("enter the length of the sides:");
    scanf("%f", &side );

    area = side*side;

    printf("the area of the square is: %f cm square \n",area);

    return 0;

}