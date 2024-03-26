#include <stdio.h>

int main(){
    char letter, letter2;

    for (letter = 60; letter <= 64; ++letter){
        printf("outer letter: %c\n", letter);

        for(letter2 = 70; letter2 <= 74; ++letter2){
            printf("Inner letter %c\n", letter2);
        }
    }
    return 0;
}