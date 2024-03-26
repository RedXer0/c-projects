#include <stdio.h>

int main(){
   int onions = 5;
   float cost_per_onion = 3.49;
   float total_cost_of_onions = onions * cost_per_onion;
   char currency = '$';

   printf("You bought a total of: %d onions\n", onions);
   printf("Each of the onions cost %.2f%c\n", cost_per_onion, currency);
   printf("So your total cost comes to %.2f%c\n", total_cost_of_onions, currency);

   return 0;
}
