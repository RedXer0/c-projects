/* we will come back to chnge this later and make it more advanced
 * believe it */

#include <stdio.h>

int main(){
   int max_score = 9999;
   int user_score = 350;

   float percentage = (float) user_score / max_score * 100.0;

   printf(" you have a score of: %.2f\n", percentage);

   return 0;
}
