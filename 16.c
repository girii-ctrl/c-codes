#include<stdio.h>
//print the table of a number n  and n is inputed by the user where n = 
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    
    int number = 0;
    int table = 0;
    while (number< 10){
        printf("%d\n",number);
        number++;
        table = n * number;
    printf("the tables:%d\n",table); }

    return 0;
}