#include <stdio.h>
#include <stdlib.h>  // For rand() and srand()
#include <time.h>    // For time() to seed the random number generator

// Function to generate a random choice for the computer (0 = Snake, 1 = Water, 2 = Gun)
int get_computer_choice() {
    return rand() % 3; // Random number between 0 and 2
}

// Function to print the choice corresponding to a number
void print_choice(int choice) {
    if (choice == 0) {
        printf("Snake\n");
    } else if (choice == 1) {
        printf("Water\n");
    } else if (choice == 2) {
        printf("Gun\n");
    }
}

int main() {
    srand(time(0)); // Seed the random number generator
    
    int user_choice, computer_choice;
    
    // Ask the user to choose: Snake (0), Water (1), or Gun (2)
    printf("Choose: \n");
    printf("0. Snake\n");
    printf("1. Water\n");
    printf("2. Gun\n");
    printf("Enter your choice (0, 1, or 2): ");
    scanf("%d", &user_choice);

    // Validate the user input
    if (user_choice < 0 || user_choice > 2) {
        printf("Invalid input! Please choose 0, 1, or 2.\n");
        return 1; // Exit if the input is invalid
    }

    // Get the computer's random choice
    computer_choice = get_computer_choice();
    
    // Print both choices
    printf("You chose: ");
    print_choice(user_choice);
    printf("Computer chose: ");
    print_choice(computer_choice);
    
    // Determine the winner
    if (user_choice == computer_choice) {
        printf("It's a draw!\n");
    } else if ((user_choice == 0 && computer_choice == 1) || 
               (user_choice == 1 && computer_choice == 2) || 
               (user_choice == 2 && computer_choice == 0)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }

    return 0;
}
