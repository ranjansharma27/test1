#include<stdio.h>

int main(){
    int age;
    printf("enter age: ");
    scanf("%d", &age);

    if(age > 18){
        printf("adult \n");
        printf("they can vote \n");
        printf("they can ride \n");

    }
    else {
        printf("not adult\n");
    
    }
    return 0;
}