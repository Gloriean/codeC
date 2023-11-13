#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n = 50;
    int *p = &n;
    char *s = "Hi!";

    
    printf("%p\n", &n);   //address
    printf("%p\n", p);    //pointer
    printf("%i\n", *p);
    printf("%p\n", s);
    printf("%s\n", s);
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+45900));


    int var[4] = {40, 56, 62, 76};
    int i;

    for (i = 0; i < 4; i++){
        printf("%p\n", &var[i]);
    }

    return 0;
}