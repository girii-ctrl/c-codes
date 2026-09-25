#include<stdio.h>
//print the factorial of a number n
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int num = 1;
    int factorial = 1 ;
    while (num <= n){
       // printf("%d\n",num);
       
        factorial = factorial * num;
         num++;
        printf("the factorial :%d\n",factorial);

    } printf("the end");
}