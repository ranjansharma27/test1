#include<stdio.h>
#include<string.h>

struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
void printAdd(struct address add);

int main(){
    struct address adds[5];
    printf("enter info for person 1 : ");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printAdd(adds[0]);
    return 0;
}
void printAdd(struct address add){
    printf("address is %d, %d,%s,%s",add.houseNo,add.block,add.city,add.state);
    
}
