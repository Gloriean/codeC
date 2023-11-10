#include <stdio.h>

int main(void){
    int p, j;
    for (p = 1; p <= 6; ++p){
        printf("Outer loop: %d\n", p);

   

        for (j = 1; j <= 4; ++j){
            printf("Inner loop: %d\n", j);
        }
    }
    return 0;
}
