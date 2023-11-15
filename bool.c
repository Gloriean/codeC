//returning boolean factors
#include <stdio.h>
#include <stdbool.h>

int main(void){
    
bool isProgramming = true;
bool isHustlingEasy = false;

    printf("%d\n", isProgramming);
    printf("%d\n", isHustlingEasy);
    printf("%d\n", isProgramming == isHustlingEasy);
    printf("%d\n", isProgramming && isHustlingEasy);
    printf("%d\n", isProgramming || isHustlingEasy);
    printf("%d\n", !(isProgramming && isHustlingEasy));
    return 0;


//Comparing values and variables and using boolean specifier
int x = 40, y = 10;

printf("%d, x is greater than y\n\n", x > y);
printf("%d, x is not equal to y\n\n", x == y);
printf("%d, y is not greater than or equal to x\n\n", y >= x);
return 0;
}