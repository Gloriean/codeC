#include <stdio.h>
#include <stdbool.h>

int main(void){
    //Let's think of a "real life example" where we need to find out if a person is old enough to vote.
    //In the example below, we use the >= comparison operator to find out if the age (25) 
    //is greater than OR equal to the voting age limit, which is set to 18:
    int myAge = 8;
    int votingAge = 18;

if (myAge >= votingAge){
    printf("You're Eligible to vote!\n");
}
else{
    printf("You're not Eligible to vote!\n");
}
   
}