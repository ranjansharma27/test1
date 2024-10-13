#include<stdio.h>
#include<string.h>

void printString( char arr[]);
void countLength( char arr[]);
void salting (char password[]);
void slice(char str[], int n, int m);

int main(){
    char str[]="helloworld";
    slice(str,3,6);
}
void slice(char str[], int n, int m){
    char newStr[100];
    int j=0;
    for (int i=n; i <=m; j++){
        newStr[j]=str[i];
        
    }
    newStr[j]='\0';
    puts(newStr);
    
}
