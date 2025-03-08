// Following operations can be performed on a pointer:
// 1. Addition of a number to a pointer.
// 2. Subtraction of a number from a pointer.
// 3. Subtraction of one pointer from another.
// 4. Comparison of two pointer variables.
// Quick Quiz: Try these operations on another variable by creating pointers in a separate
// program. Demonstrate all the four operations.
#include<stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40, 50};  // Array for pointer arithmetic
    int *ptr1, *ptr2; // Pointer variables


    ptr1 = arr;   // Points to the first element of the array
    ptr2 = &arr[3]; // Points to the fourth element of the array

    // 1. Addition of a number to a pointer
    printf("Original pointer ptr1 points to: %d\n", *ptr1);
    ptr1 = ptr1 + 2;  // Moving pointer by 2 positions
    printf("After adding 2, ptr1 points to: %d\n\n", *ptr1);

    // 2. Subtraction of a number from a pointer
    printf("Original pointer ptr2 points to: %d\n", *ptr2);
    ptr2 = ptr2 - 1;  // Moving pointer back by 1 position
    printf("After subtracting 1, ptr2 points to: %d\n\n", *ptr2);

    // 3. Subtraction of one pointer from another
    int difference = ptr2 - ptr1; // Finding the difference between two pointers
    printf("Difference between ptr2 and ptr1: %d elements\n\n", difference);

    // 4. Comparison of two pointers
    if (ptr1 > ptr2)
        printf("ptr1 is pointing to a higher memory address than ptr2.\n");
    else if (ptr1 < ptr2)
        printf("ptr1 is pointing to a lower memory address than ptr2.\n");
    else
        printf("Both pointers point to the same location.\n");

    

    return 0;
}