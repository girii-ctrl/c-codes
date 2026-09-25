#include<stdio.h>
#include<math.h>
//keep taking numbers as input from user until user enters a multiple of 7
int main(){
    int n;
    while(n % 7 != 0){
        printf("enter the number:");
        scanf("%d",&n);
        if(n % 7 == 0){
            printf("the number is multiple of 7\n");
            break;
        }
    }printf("the end");
}