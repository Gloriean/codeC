#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n = 50;
    int *p = &n;
    char *s = "Hi!";

    char *t = malloc(strlen(s) + 1); 
    
    printf("%p\n", &n);
    printf("%p\n", p);
    printf("%i\n", *p);
    printf("%p\n", s);
    printf("%s\n", s);
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+45900));
}