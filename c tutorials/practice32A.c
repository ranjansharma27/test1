//convert to celsiue to fahrenhit
#include<stdio.h>
float converTemp (float celsius);
int main(){
    float far= converTemp(82);
    printf("far :%f", far);
    return 0;
}
float converTemp(float celsius){
    float far= celsius*(9.0/5.0)+32;
    return far;
}