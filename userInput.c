#include <stdio.h>

int main(){
    //getting user input and assigning a single variable

    int myNum;

    printf("Enter a number: \n");

    scanf("%d", &myNum);
    printf("Output Result: %d\n", myNum);

    //getting user input and assigning multiple variables

    int var;
    char Alpha;

    printf("Enter a Number and a Character: \n");

    scanf("%d %c", &var, &Alpha);

    printf("Your Number is: %d\n", var);
    printf("Your Character is: %c\n", Alpha);


    //Take String input
    char firstName[60];
    
    printf("Enter your first name and press enter: \n");
    fgets(firstName, sizeof(firstName), stdin);

    scanf("%s", firstName);

    printf("Hello %s\n", firstName);
    
    return 0;

}
