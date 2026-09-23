//create an array of 5 integers and print the elements in reverse order
#include<stdio.h>

int main(){
    int arr[]={10,20,30,40,50};
  for(int i = 4; i >= 0 ;i--){
    printf("the number is :%d\n",arr[i]);
  }
    return 0;
}