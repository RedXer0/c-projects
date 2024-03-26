#include <stdio.h>

int main(){
    int mynum[] = {78, 98, 44, 2};
    while (mynum[3] < 88) {
        printf("%d\n", mynum[3]);
        mynum[3]++;

    }
    printf("Line break\n");
    int i;
    for (i = 0;  i < 4; ++i){
        printf("%d\n", mynum[i]);
    }
    return 0;
}