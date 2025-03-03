#include<stdio.h>

int main(){
    int a =1, b = 2, c = 3;
    printf("%d", a+=(a+=3,5,a));
    return 0;
}

Output---> 8
    Explanation---->The comma operator ( , ) in C evaluates expressions from left to right and returns the last expression's value.

Inside a+=(a+=3,5,a)

First part: a += 3

a = a + 3 = 1 + 3 = 4
Second part: 5

This is just a constant value 5.
Third part: a

After a += 3, a is now 4.
Since the comma operator returns the last expression, the result of (a+=3,5,a) is 4.

Final Assignment: a += 4

a = a + 4 = 4 + 4 = 8 
