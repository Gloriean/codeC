#include <stdio.h>
#include <string.h>

int main(void){
    char str[] = "Hello, World!";
    printf("%s\n", str);

   char greetings[] = "Well done, there!";
    printf("%s\n", greetings);
    printf("%lu\n", sizeof(greetings));

//looping through a string
    char carName[] = "Volvo";
    int i;

    for (i = 0; i < 5; ++i){
        printf("%c\n", carName[i]);
    }

    return 0;
}