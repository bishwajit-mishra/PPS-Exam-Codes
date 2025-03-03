#include<stdio.h>

int main(){
    int i = 100;
         {
            int i = 0;
            printf("%d",i==0);
         }    
    return 0;
}
/*
Variable Shadowing:

---> When you declare a variable with the same name inside {}, it hides the outer variable.
---> Inside the {}, you can only access the inner variable.

Comparisons in C (==)

== checks if two values are equal.
If true, it returns 1; if false, it returns 0.



*/