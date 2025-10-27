#include <stdio.h>
#include <stdbool.h>

int main()
{
    /*
     * BASIC DATA TYPES IN C
     * 
     * */
     
     // float
    float myFloat = 23.333;
    printf("\nThe myFloat value is: %f", myFloat);
    
    // double
    double myDouble = 55.44444444444445e+11;
    printf("\nThe myDouble value is: %e", myDouble); // %e or %g for double
    
    // boolean
    bool myBoolVariable = true;
    printf("\nThe myBoolVariable value is: %i", myBoolVariable); // %i or %u for boolean
    
    // int
    int age = 30;
    printf("\nThe int value is: %d", age); // %d or %i for integer
    
    enum weekdays {Monday, Tuesday, Wednesday, Thursday, Friday};
    enum weekdays tuesday = Tuesday;
    
    // char
    char myChar = 'A';
    printf("\nThe myChar value is: %c", myChar);
    
    char myString[] = "Hello !";
    printf("\nThe myString value is: %s", myString);
    
    
    
    return 0;
}