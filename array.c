#include <stdio.h>

int main(void){
    //create a program that prompts the user for a size, n.
    //Dynamically create an array of that size, where each element is 
    //two times the previous one.
    //Start the array at 1

int myNumbers[6];
   myNumbers[0] = 34;
   myNumbers[1] = 22;
   myNumbers[2] = 12;
   myNumbers[3] = 0;
   myNumbers[4] = 9;
   myNumbers[5] = 45;

    printf("Num 1: %d\n\n", (myNumbers[0]));
    printf("Num 2: %d\n\n", (myNumbers[1]));
    printf("Num 3: %d\n\n", (myNumbers[2]));
    printf("Num 4: %d\n\n", (myNumbers[3]));
    printf("Num 5: %d\n\n", (myNumbers[4]));
    printf("Num 6: %d\n\n", (myNumbers[5]));


}


