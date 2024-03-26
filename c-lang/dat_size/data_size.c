#include <stdio.h>

int main(){
   int mynum = 999999;
   float mydec = 3.14159;
   double myintdec = 5.999999;
   char mylet = 'a';

   printf("%lu\n", sizeof(mynum));
   printf("%lu\n", sizeof(mydec));
   printf("%lu\n", sizeof(myintdec));
   printf("%lu\n", sizeof(mylet));

   return 0;
}
