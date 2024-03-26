#include <stdio.h>

int main(){
    int count = 0;

    switch(count){
        case 1:
        printf("two\n");
        break;
        case 2:
        printf("four\n");
        break;
        case 3:
        printf("six\n");
        break;
        case 4:
        printf("eight\n");
        break;
        default:
        printf("counting by 2's\n");
    }
    return 0;
}