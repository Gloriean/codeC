#include <stdio.h>

struct myStructure{
    int num;
    char myLetter;
};

int main(){
    struct myStructure s1;
    struct myStructure s2;
    struct myStructure s3;


s1.num = 69;
s1.myLetter = 'B';

s2.num = 90;
s2.myLetter = 'A';

s3.num = 42;
s3.myLetter = 'C';


printf("My first number is: %d\n", s1.num);
printf("My first letter is: %c\n", s1.myLetter);

printf("My second number is: %d\n", s2.num);
printf("My second letter is: %c\n", s2.myLetter);

printf("My third number is: %d\n", s3.num);
printf("My third letter is: %c\n", s3.myLetter);


return 0;

}

