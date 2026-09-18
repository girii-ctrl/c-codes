//function that takes two numbers using pointers and prints the largest number
#include<stdio.h>
void largest(int *p , int *q);

int main(){
int a,b;
printf("enter the number of a:");
scanf("%d",&a);
printf("enter the number of b:");
scanf("%d",&b);

largest(&a,&b);
return 0;
}

void largest(int *p , int*q){
    if(*p < *q){
        printf("the largest number is:%d\n",*q);
    }else{
        printf("the largest number is:%d\n",*p);
    }
}