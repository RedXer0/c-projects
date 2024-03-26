#include <stdio.h>

int main(){
    int Num[] = {77, 88, 44, 22, 11, 66};
    int length = sizeof(Num) / sizeof(Num[0]);

    int lowestnum = Num[0];

    for (int i = 0; i < length; i++){
        if (lowestnum > Num[i]){
            lowestnum = Num[i];
        }
    }
    printf("%d\n", lowestnum);
    return 0;
}