#include <stdio.h>

struct myStructure{
    int var;
    char myLetter;
};

int main(){
    struct myStructure s1;
    struct myStructure s2;


s1.var = 69;
s1.myLetter = 'B';

s2.var = 90;
s2.myLetter = 'A';


printf("My first number is: %d\n", s1.var);
printf("My first letter is: %c\n", s1.myLetter);

printf("My second number is: %d\n", s2.var);
printf("My second letter is: %c\n", s2.myLetter);


return 0;

}

