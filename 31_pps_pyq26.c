#include<stdio.h>

void main(){
    int i = 1,j=5;
    j= ++i;
    j=i++;
    printf("%d and %d",j,i);
    
}