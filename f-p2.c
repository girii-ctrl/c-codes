//function that takes two numbers using pointers and prints their difference

#include<stdio.h>
void difference(int *p , int *q);
int main(){
int a , b;
printf("enter the number a:");
scanf("%d",&a);
printf("enter the number b:");
scanf("%d",&b);

difference(&a,&b);

return 0;

}
void difference (int *p , int *q){
    int temp = *p - *q ;
    printf("the difference of the two numbers is :%d\n",temp);
    //return *p +*q ;
}