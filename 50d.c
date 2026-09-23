//take 5 numbers and calculate the sum of only the even numbers
#include<stdio.h>
int main(){
    int arr[5];
    int even = 0;  int sum = 0;  int odd = 0;
  for(int x = 0 ; x <= 4 ; x++){
    printf("enter any number:");
    scanf("%d",&arr[x]);
  }
for(int i = 0 ; i <= 4 ; i++){
    if(arr[i] % 2 == 0){
        even = even + 1;
        sum = sum + arr[i];
    }else{
        odd = odd + 1 ;
    }
}
printf("the total even numbers are :%d\n",even);
printf("the total odd  numbers are :%d\n",odd);
printf("the sum of even numbers are :%d\n",sum);
return 0;
}