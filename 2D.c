#include <stdio.h>

int main(void){
   
 int matrix[2][3] = {{2, 3, 4}, {7, 8, 9}};
    printf("%d\n\n", matrix[0][0]);
    printf("%d\n\n", matrix[0][1]);
    printf("%d\n\n", matrix[0][2]);
    printf("%d\n\n", matrix[1][0]);
    printf("%d\n\n", matrix[1][1]);
    printf("%d\n\n", matrix[1][2]);

    matrix[0][0] = 56;
    printf("%d\n\n", matrix[0][0]);

    
    //looping through a multidimensional array
    int matrix[2][2] = {{22, 4}, {6, 9}};
    int i, j;

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
         printf("%d\n\n", matrix[i][j]);
        }
       
    }

}