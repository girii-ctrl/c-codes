#include<stdio.h>
//program to print the number from 0 to n where n is given by the user
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int number = 1; number<= n; number++){
        printf("%d\n",number);
    }return 0;
}