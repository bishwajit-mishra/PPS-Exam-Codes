#include<stdio.h>

int main(){
    int y=200;
    const int x = y;
    x= 10;
    printf("%d\n",x);
    return 0;
}
/* Ans--> Error
Variable Declarations:

int y = 200; → This creates a normal integer variable y with value 200.
const int x = y;
Here, x is declared as constant (const int means x cannot be changed after initialization).
However, y is a non-constant variable.
This may cause a compilation error, depending on the compiler, because const int x = y; requires y to be constant at compile time.
Attempting to Modify a const Variable (x = 10;):
Since x is declared as const, modifying it (x = 10;) is not allowed.
This causes a compilation error.

*/