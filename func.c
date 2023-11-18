#include <stdio.h>

//creating and declaring a function.
void myFunction(char firstName[], int age){
    printf("Hello, %s You're %d years old. \n", firstName, age);
}
    
int main(void){
    
    myFunction("Esther", 26);
    myFunction("Ridwan", 24);
    myFunction("Olamide", 25);

    return 0;
}


