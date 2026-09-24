/*take 5 numbers from the user and store them in an array ask the user for another 
and check whether it is present in the array */
#include<stdio.h>
int main(){
    int arr[5];
    int search ;
    int found = 0;
    for(int x = 0; x <=4 ; x++){
        printf("enter any number:");
        scanf("%d",&arr[x]);
    }
    printf("enter the number to be searched:");
    scanf("%d",&search);
 for(int i = 0 ; i<= 4; i++){
    if(arr[i]== search){
        found = 1;
    } 
 }
 if(found == 1){
    printf("the entered number is present");
 } else {
printf("the entered number is absent");
 }
 return 0;
}