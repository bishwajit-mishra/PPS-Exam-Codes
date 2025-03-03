#include <stdio.h>

// Function prototypes
void add(double num1, double num2);
void subtract(double num1, double num2);
void multiply(double num1, double num2);
void divide(double num1, double num2);

int main() {
    int choice;
    double num1, num2;

    printf("Simple Calculator\n");
    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(choice) {
        case 1:
            add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            // Checking for division by zero
            if (num2 != 0) {
                divide(num1, num2);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid choice! Please select a valid operation.\n");
    }

    return 0;
}

// Function to add two numbers
void add(double num1, double num2) {
    printf("Result: %.2lf\n", num1 + num2);
}

// Function to subtract two numbers
void subtract(double num1, double num2) {
    printf("Result: %.2lf\n", num1 - num2);
}

// Function to multiply two numbers
void multiply(double num1, double num2) {
    printf("Result: %.2lf\n", num1 * num2);
}

// Function to divide two numbers
void divide(double num1, double num2) {
    printf("Result: %.2lf\n", num1 / num2);
}
