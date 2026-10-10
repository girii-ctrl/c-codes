#include<stdio.h>
//print reverse of the table for a number n
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int table = 1;
    for(int num = 10;num >= 1 ; num--){
table = n * num;
printf("%d\n",table);
    }printf("the end");
    return 0;
}