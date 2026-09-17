#include<stdio.h>
//write the program to swap the values of the a and b
int swap(int a , int b );
int swap1(int *a, int *b );

int main(){ 
    int a , b ;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);

    swap(a,b);
printf("enter the value of a:%d , b :%d \n",a ,b );
    swap1(&a , &b);
    printf("enter the value of a:%d , b :%d \n",a ,b );
}

//call by value 
int swap(int a , int b ){
int t = a;
a = b;
b = t ;
printf("a = :%d\n",a);
printf("b = :%d\n",b);
return a, b ;
}
// call by reference
int swap1(int *a, int *b){
    int t = *a ;
    *a = *b ;
    *b = t ;
    printf("a = :%d\n",*a);
printf("b = :%d\n",*b);
return *a , *b ;
} 