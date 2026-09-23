//take 5 numbers and count how many are even and odd 
#include<stdio.h>
int main(){
    int arr[5];
    int even = 0;
    int odd = 0;
    for(int x = 0 ; x <= 4 ; x++){
        printf("enter the any number:");
        scanf("%d",&arr[x]);
    }
for (int i = 0 ; i <= 4 ; i++){
    if(arr[i]% 2 == 0){
        even = even + 1;
    }else{
        odd = odd + 1 ;
    }
}
printf("the total even number is :%d\n",even);
printf("the total odd number is :%d\n",odd);
return 0;
}