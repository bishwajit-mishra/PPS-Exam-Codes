#include<stdio.h>

void main(){
    double ch;
    printf("Enter a value between 1 to 2:");
    scanf("%lf",&ch);
    switch (ch){
        case 1:
        printf("1");
        break;
        case 2 :
        printf("2");
        break;
    }
    return 0;
}

// Ans:- Compile Time Error
// Bcz switch does not work with floating-point (double) values.
// The switch statement only supports integral types (int, char, enum). It does not work with double.
