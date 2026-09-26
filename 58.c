//take 5 numbers into array and separate them into even and odd number
#include<stdio.h>
int main(){
    int arr[5];
    int even ;
    int odd ;
    for(int x  = 0; x<= 4 ; x++){
        printf("enter the numbers:");
        scanf("%d",&arr[x]);
    }printf("the even numbers\n");
    for(int x = 0 ; x<= 4 ; x++){
        if(arr[x] % 2 == 0){
            even = arr[x];
            printf("%d\n",even);
        }}
        printf("the odd numbers\n");
        for(int x = 0 ; x<= 4 ; x++){
        if(arr[x] % 2 != 0){
            odd = arr[x];
            printf("%d\n",odd);
        }
    }
    return 0;
}