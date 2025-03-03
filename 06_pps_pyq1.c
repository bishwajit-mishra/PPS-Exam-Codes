/* Write a program that calculates the sum of even and odd numbers 
seperately from 1 to N(where N is provided by the user)using a while loop.
Display both sums at the end. 
*/
#include<stdio.h>

int main(){
    int N,sumEven=0,sumOdd=0;
    printf("Enter Your Number:");
    scanf("%d",&N);
    int i =1;
    while(i<=N){
        if(i%2==0){
            sumEven+=i;
        }
        
        else
            sumOdd+=i;
            i++;
        
    }
        
        printf("Sum of Even: %d\n",sumEven);
        printf("Sum of Odd: %d\n",sumOdd);
    
    return 0;
}