#include <stdio.h>

int main(){
    float num = 100.0;

    do {
        printf("%.1f\n", num);
        num --;
    }
    while (num > -100.1);

    return 0;
}