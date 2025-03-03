#include<stdio.h>

int main(){
    int x=3, y=4, z;
    z= ++x * y++;
    printf("%d",z);
    return 0;
}