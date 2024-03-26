#include <stdio.h>

int main(){
   int myInt = 30;
   float myDec = 3.14159;
   char myLet = 'A';
   double myDob = 34e5;

   int a = 5, b = 6, c = 7;

   printf("%d\n %f\n %c\n %lf\n", myInt, myDec, myLet, myDob);
   printf("%d\t", a + b * c);

   return 0;
}
