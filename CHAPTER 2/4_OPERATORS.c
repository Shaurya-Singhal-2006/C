//                                                        OPERATORS

//                                                   RELATIONAL OPERATORS


//              ==             (equals too)
//              >              (greater than)
//              >=             (greater than equal too)                 {if the output is 0 it means the answer is (false)}
//              <              (less than)                              {if the output is 1 it means the answer is (true)}
//              <=             (less than equals too)
//              !=             (not equals too)

#include<stdio.h>
 int main(){
    
    printf("%d", 4 == 4);     // ans 1
    printf("%d", 4 > 3);      // ans 1
    printf("%d", 4 >= 5);     // ans 0
    printf("%d", 4 < 2);      // ans 0
    printf("%d", 4 <= 8);     // ans 1
    printf("%d", 4 != 4);     // ans 0

    return 0;
}


//                                                     LOGICAL OPERATORS

//       &&      AND         (ans is true only if all the statements are true (even if one is false then the answer is false))

//       ||      OR          (even if one statement is true the answer is true (but  if none is true then the answer is false))

//        !      NOT         (changes false into true     and     true into false)




#include<stdio.h>
 int main(){
    
    printf("%d", 5 == 5 && 2 < 1 );                // answer 0
    printf("%d", 4 == 5 || 2 > 5 || 5 > 1 );       // answer 1
    printf("%d", (5 == 5) && !(2 < 1) );           // answer 1

    return 0;
}

// operator precedence 

// (!)   -->   (*,/,%)   -->   (+,-)   -->   (<,<+,>,>=)   -->   (==,!=)   -->   (&&)   -->   (||)   -->   (=)


//                                                    ASSIGNMENT OPERATORS

//    =         (equal to)
//    +=        (plus equal to)
//    -=        (minus equal to)
//    *=        (multiply equal to)
//    /=        (divide equal to)
//    %=        (modulo equal to)

#include<stdio.h>
 int main(){
  int a,b;
   
  a = 5;
  b = 7;

    printf("%d"a = b);
    printf("%d"a += b);   // it means a = a + b 
    printf("%d"a -= b);   // it means a = a - b
    printf("%d"a *= b);   // it means a = a * b
    printf("%d"a /= b);   // it means a = a / b
    printf("%d"a %= b);   // it means a = a % b

    return 0;
}