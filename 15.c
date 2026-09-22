#include<stdio.h>
//print the sum of first n natural numbers where n = 5
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
int sum = 0;
for (int number = 1;number<=n;number++){
    printf("%d\n",number);
  sum = sum + number;
 
}printf("the sum of all natural numbers:%d",sum); 
   
    return 0;
}