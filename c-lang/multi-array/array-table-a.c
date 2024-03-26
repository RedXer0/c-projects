#include <stdio.h>


int myarraytable(){
    int matrix[2][3] ={{22,66,99}, {44,55,88}};
    int x, y;
    for (x = 0; x < 2; ++x){
        for (y = 0; y < 3; ++y ){
            printf("%d\n", matrix[x][y]);
        }
    }
}
int main(){
    int table[2][3] = {{4,23,98}, {9,58,48}};
    printf("%d\n", table[1][2]);
    printf("Line break\n");
    myarraytable();
    return 0;
}