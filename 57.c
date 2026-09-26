//take 5 numbers into array and count how many are positive , negative and zero
#include<stdio.h>
int main(){
    int arr[5];
    int positive = 0;
    int negative = 0;
    int zero = 0;
    for(int x = 0 ; x<= 4 ; x++){
        printf("enter the numbers:");
        scanf("%d",&arr[x]);
    }
    printf("counting positive , negative and zero\n");
    for(int x = 0; x<= 4; x++){
        if(arr[x]>0){
            positive++;
        }else if(arr[x]<0){
            negative++;
        }else{
            zero++;
        }
    }
    printf("the positive numbers count :%d\n",positive);
    printf("the negative numbers count :%d\n",negative);
    printf("the zero numbers count :%d\n",zero);
    return 0;
}