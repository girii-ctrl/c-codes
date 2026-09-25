#include<stdio.h>
// print all the number from 0 to n expect 6
int main(){
    int n ;
    printf("enter the number:");
    scanf("%d",&n);

    for (int num = 0 ;num <= n ; num ++){
        if (num == 6){
            continue;
        }printf("%d\n",num);
} printf("thank you ");
return 0;
}