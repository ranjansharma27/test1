#include<stdio.h>

void printAdress(int n);
int main(){
    int n= 4;
    printAdress(n);
    print("address of n is: %u\n",n);
    return 0;
}

void printAddress(int n) {
    printf("address of n is : %u\n", n);
    
}