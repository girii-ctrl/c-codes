//function that takes three integers using pointers and changes their values to 10,20 and 30
#include<stdio.h>
void change(int *x , int *y , int *z);
int main(){
int a, b, c;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
printf("enter the value of c:");
scanf("%d",&c);
change(&a,&b,&c);
return 0;
}
void change(int *x , int *y , int *z){
    *x = 10;
    *y = 20;
    *z = 30;
    printf("the value of a is :%d\n",*x);
printf("the value of b is :%d\n",*y);
printf("the value of c is :%d\n",*z);
}