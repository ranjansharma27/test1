#include<stdio.h>
int main(){
    FILE*fptr;
    fptr =fopen("student.txt","w");

    char name[100];
    int age;
    float cgpa;

    printf("enter name : ");
    scanf("%s",&name);
    printf("enter age : ");
    scanf("%d", &age);
    printf("enter cgpa : ");
    scanf("%f", &cgpa);

    fprintf(fptr,"%s\t",name);
    fprintf(fptr,"%s\t",age);
    fprintf(fptr,"%s\t",cgpa);

    fclose(fptr);
    return 0;
}