#include <stdio.h>

int main(){
    FILE *fptr;

    fptr = fopen("tst.c", "w");

    fprintf(fptr,"#include <stdio.h>\n int main(){printf(\"Hello, World!\"); return 0;}");
    fclose(fptr);
    return 0;
}