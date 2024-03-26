#include <stdio.h>

int main(){
    double num;

    for ( num = 0.00; num < 100.35; num ++){
        printf("%.3f\n", num);
    }
    return 0;
}