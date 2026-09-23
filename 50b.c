//write a program to find the average of the elements in an array
#include<stdio.h>
int main(){
    int arr [] = {10,20,30};
  int sum = 0;
  int average ;

     for(int i = 0 ; i<= 2 ; i++){
         sum = sum + arr[i];
        average = (sum / 3 );

     } 
       printf("the average of the numbers is :%d\n",average);

    return 0;

}

