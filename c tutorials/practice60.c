#include<stdio.h>
#include<string.h>

typedef struct bankAccount{
    int accountNo;
    char name[100];

}acc;

int main(){
    acc acc1= {123,"ranjan"};
    acc acc2= {124, "salini"};

    printf("acc no =%d\n", acc1.accountNo);
    printf("name= %s\n", acc1.name);
    return 0;
}