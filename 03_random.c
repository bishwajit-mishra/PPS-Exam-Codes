#include <stdio.h>

int main() {
    int input;

    // Ask the user to input a number
    printf("Enter a number (0 for false, any other number for true):");
    scanf("%d", &input);
    if (input != 0) {
        printf("You entered true!\n");
    } 
        
    else{
        printf("You entered false!\n");
    }

    return 0;
}
