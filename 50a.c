//take 5 numbers and find the largest
#include<stdio.h>
int main(){
int arr[5];
int largest = 0 ;
for(int x = 0 ; x < 5 ; x++){
    printf("enter any number:");
    scanf("%d",&arr[x]);
}
for(int i = 0 ; i < 5 ; i++){
    if(arr[i]>largest){
        largest = arr[i];
    }
}
printf("the largest number is :%d\n",largest);
}