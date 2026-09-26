//take 5 numbers into an array and print them in reverse order
#include<stdio.h>
int main(){
    int arr[5];
    for(int x = 0 ; x<= 4 ; x++){
        printf("enter the numbers:");
        scanf("%d",&arr[x]);
    }
    printf("------the reverse order -------\n");
    for(int x = 4; x>= 0 ;x--){
        printf("the numbers in reverse order is :%d\n",arr[x]);
    }
    return 0;
}