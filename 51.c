/*take 5 numbers from the user. ask for a number and 
count how many times that number appears in the array */
#include<stdio.h>
int main(){
    int arr[5];
    int search ;
    int count = 0;
    for(int x = 0 ; x <= 4 ; x++){
        printf("enter the numbers:");
        scanf("%d",&arr[x]);
    }
    printf("enter the number which should be counted:");
    scanf("%d",&search);
    for(int i = 0 ; i <= 4 ; i++){
        if(arr[i] == search){
            count = count + 1 ;
        }
    }if(count >= 1){
        printf("the count of the number:%d",count);
    }else{
        printf("the number is not present");
    }
    return 0;
}