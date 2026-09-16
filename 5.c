#include<stdio.h>
int main(){
    // number is 9 < x < 100 then its is true 
    /*0 = false
      1 = true */
    int value;
    printf("enter the number:");
    scanf("%d",&value);
    printf("%d\n",(9<value)&&(value<100));
    return 0;

}