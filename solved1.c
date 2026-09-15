#include<stdio.h>
// write a function which acts as a calculator using functions

int add(int a , int b);
int sub(int a , int b);
int multiply(int a , int b);
int divide ( int a , int b);

int main(){
    int a , b ;

    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    int ans;
    printf("enter the operation to be performed:");
    scanf("%d",&ans);

if(ans == 0){
    int w = add(a, b);
    printf("the sum of the numbers is :%d\n",w);
}else if(ans == 1){
   int x = sub(a,b);
   printf("the difference of the numbers is :%d\n",x);
}else if(ans == 2){
   int y = multiply(a,b);
   printf("the product of the numbers is :%d\n",y);
}else if(ans == 3){
    int z = divide(a,b);
    printf("the quotient of the numbers is :%d\n",z);
}else{
    printf("invalid operation");
}}

int add(int a, int b){
    return a + b;
}
int sub(int a, int b){
  return  a - b;
}
int multiply(int a, int b){
    return a * b;
}
int divide(int a, int b){ 
    return a / b;
}