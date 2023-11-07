#include <stdio.h>

int main(void){
    int studentID = 10;
    int studentAge = 23;
    float studentFee = 78.000;
    char studentGrade = 'A';

    printf("Student ID: %d\n\n", studentID);
    printf("Student Age: %d\n\n", studentAge);
    printf("Student Fee: %.1f\n\n", studentFee);
    printf("Student Grade: %c\n\n", studentGrade);
}