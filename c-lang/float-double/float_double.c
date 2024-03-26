#include <stdio.h>

int main(){
   float numA = 34.5;
   float numB = 34.5e4;
   double numA1 = 34.6;
   double numB1 = 34.6e4;

   printf("%f\n", numA);
   printf("%4.f\n", numB);
   printf("%lf\n", numA1);
   printf("%5.lf\n", numB1);

   return 0;
}
