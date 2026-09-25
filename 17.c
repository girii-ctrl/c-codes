#include<stdio.h>
#include<math.h>
//keep taking numbers as input from user until user enters and odd number
int main(){
    for(int n;n % 2 == 0;){
        printf("enter the number:");
        scanf("%d",&n);
    if (n % 2 != 0 ){
        break;
    }
}printf("the end");
}