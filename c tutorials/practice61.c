#include<stdio.h>

int main(){
    FILE*fptr;
    fptr= fopen("newtest.txt","r");
    int n;
    fscanf(fptr,"%d\n",&n);
    printf("number= %d\n",n);
    fscanf(fptr,"%d\n",&n);
    printf("number= %d\n",n);
    fscanf(fptr,"%d\n",&n);
    printf("number= %d\n",n);
    fscanf(fptr,"%d\n",&n);
    printf("number= %d\n",n);
    fscanf(fptr,"%d\n",&n);
    printf("number= %d\n",n);
    fscanf(fptr,"%d\n",&n);
    printf("number= %d\n",n);

    fclose(fptr);
    return 0;
}