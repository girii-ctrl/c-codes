//take 5 numbers into an array and find the 2nd largest number
#include<stdio.h>
int main(){
    int arr[5];
    int largest ;
    int sec_largest;
    for(int x = 0 ; x <= 4 ; x++){
        printf("enter the numbers:");
        scanf("%d",&arr[x]);
    } largest = arr[0];
    for(int x = 0; x<= 4 ; x++){
        if(arr[x]> largest){
            largest = arr[x];
        }
    }
    printf("the largest number is :%d\n",largest);
    sec_largest = arr[0] ;
for(int x =0 ; x<= 4 ; x++){
    if(arr[x]< largest && arr[x]> sec_largest){
        sec_largest = arr[x];
    }
}printf("the second largest number is :%d\n",sec_largest);
return 0;
}