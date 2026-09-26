//take 5 numbers to the array and find the second smallest number
#include<stdio.h>
int main(){
    int arr[5];
    int smallest ;
    int sec_smallest ;
    for(int x = 0 ; x <= 4 ; x++){
        printf("enter the number:");
        scanf("%d",&arr[x]);
    }smallest = arr[0];
    for(int x = 0 ; x <= 4 ; x++){
        if(arr[x]<= smallest){
            smallest = arr[x];
        }
    }
    printf("the smallest number is :%d\n",smallest);
   // sec_smallest = arr[1];
    for(int x = 0 ; x<= 4 ; x++){
        if(arr[x]>smallest && arr[x]<sec_smallest){
            sec_smallest = arr[x];
        }
    }printf("the second smallest number is :%d\n",sec_smallest);
    return 0 ;
}