#include <stdio.h>
#include <string.h>

int main(void){
    char str[] = "Hello, World!";
    printf("%s\n\n", str);

   char greetings[] = "Well done, there!";
    printf("%s\n\n", greetings);

    //size of greetings
    printf("%lu\n\n", sizeof(greetings));

//looping through a string
    char carName[] = "Volvo";
    int i;

    for (i = 0; i < 5; ++i){
        printf("%c\n\n", carName[i]);
    }


    //Inserting double quotes in a sentence
    char txt[] = "I am a Manual tester that is why it is easy for me to dive into \"Autometed testing.\" ";
    printf("%s\n\n", txt);

    //getting the string length and size.
    printf("Length is: %lu\n\n", strlen(txt));
    printf("Size is: %lu\n\n", sizeof(txt));



    char txt1[] = "It\'s easy for me!";
    printf("%s\n\n", txt1);


    //concatenating strings
    char str1[60] = " Hello, ";  // the size of str1 should be large enough to store the result of the two strings combined.
    char str2[] = " World! ";

    strcat(str1, str2);
    printf("Concatenation of two strings: %s\n\n", str1);


    //copying txt3 to txt2.
    char txt2[80] = "You\'re gonna become an automated tester if you don\'t give up!";
    char txt3[80] = "Keep doing your best to become better";

    strcpy(txt3, txt2);
    printf("Copying of two Strings: %s\n", txt3);

    //comparing two strings


    char txt4[] = "wait";
    char txt5[] = "try again!";
    char txt6[] = "stop!";

    printf("%d\n", strcmp(txt4, txt5));
    printf("%d\n", strcmp(txt4, txt6));
    
    return 0;
}
