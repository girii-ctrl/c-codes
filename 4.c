#include<stdio.h>
#include<math.h>
int main(){
    // program to check whether the number is divisible by  2 or not
    // 0 - false 
    // 1 - true
int a;
printf("enter the number:");
scanf("%d",&a);
int divide = a % 2;
printf("%d\n",divide == 0);
return 0;
}