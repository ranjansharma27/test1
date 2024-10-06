// print hello world 5 times by the help of recursive method
#include<stdio.h>
void printHW (int count);
int main(){
    printHW(10);
    return 0;
}
// recursive function
void printHw(int count){
    if(count == 0) {
        return;
    }
    printf("hello world\n");
    printHW( count-1);
}