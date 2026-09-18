//function that takes the address of an integer and changes its value 
#include<stdio.h>
int change(int *p);
int main(){
  int a ;
  printf("enter any number:");
  scanf("%d",&a);
change(&a);
return 0;
}
int change(int *p){
  *p = 100;
  printf("the changed number is :%d\n",*p);
  return *p ;
}