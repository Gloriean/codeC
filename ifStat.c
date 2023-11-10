#include <stdio.h>
#include <stdbool.h>

int main(void){
	int time = 24;

    if (time < 10){
        printf("Good morning!\n!"); // time is greater than 10
    }

    else if (time < 14){
        printf("Good day!\n"); // time is greater than 22
    }
    
    else{
        printf("Good evening!\n"); // this will be printed out
    }
        
        
}