#include<stdio.h>
//program to check whether the number is natural number or not
int main(){
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    printf("the entered number is :%d\n",number);
    if(number>= 1 && number<= 10){
        printf("the entered number is natural");
    } else if (number>= 0 && number<= 10){
        printf("the entered number is whole number");
    }else {
        printf("the entered number is either integer or invalid");
    }
}