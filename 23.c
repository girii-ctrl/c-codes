#include<stdio.h>
//calculate the sum of all numbers between 5 to 20
int main(){
    int sum = 0;
    for (int num = 5 ; num <=20 ; num++){
        printf("%d\n",num);

    sum = sum + num ;
    } printf("the sum of all numbers between 5 to 20 :%d\n",sum);
    printf("thank you ");
}