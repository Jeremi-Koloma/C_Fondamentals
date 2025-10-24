#include <stdio.h>

int main()
{
    // Variables
    char name[100];
    int age;
    double weight;
    
    printf("How old are you ? ");
    
    // Read int data and store in "age" variable
    scanf("%d", &age);
    
    // Display "age" value on the screen
    printf("You are: %d\n", age);
    
    
    printf("\nWhat is your name ? ");
    
    // Read string data and store in "name" variable
    scanf("%s", name);
    
    // Display greeting in the screen
    printf("Welcome %s\n", name);
    
    
    printf("\nWhat is your weight ? ");
    
    // Read double data and store in "weight" variable
    scanf("%lf", &weight);
    
    // Display weight on the screen
    printf("Your weight is: %lf", weight);
    
	return 0;
}
