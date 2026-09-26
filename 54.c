//take 5 numbers into an array if an element os negative replace it with 0
#include<stdio.h>
int main(){
    int arr[5];
    
    for(int x = 0; x<= 4 ; x++){
        printf("enter the numbers:");
        scanf("%d",&arr[x]);
    }
    for(int x = 0; x <= 4 ; x++){
        if(arr[x] < 0){
            arr[x] = 0;
        }else{
            arr[x] = arr[x];
        }
    }
    for(int x = 0 ; x<= 4 ; x++){
        printf("the new numbers after verifying:%d\n",arr[x]);
    }   
    return 0;
}