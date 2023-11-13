#include <string.h>
#include <stdio.h>

int main(void){
   int scores[3];
   scores[0] = 72;
   scores[1] = 73;
   scores[2] = 33;

   printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);

   //Create a variable called myNum of type int and assign the value 15 to it:
int myNum;
myNum = 15;

char str1[30] = " Hello, ";
char str2[30] = " World! ";

strcpy(str2, str1);
printf("%s\n", str2);

return 0;

char txt1[20] = "greetings";
char txt2[] = "respect";

strcat(txt1, txt2);

printf("%s\n", txt1);

}