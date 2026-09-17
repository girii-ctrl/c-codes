#include<stdio.h>
int main (){
// find the average of three numbers
int a , b, c;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
printf("enter the value of c:");
scanf("%d",&c);

int avrg ;
avrg = (a+b+c)/3;
printf("the average of three numbers:%d",avrg);
return 0;

}
