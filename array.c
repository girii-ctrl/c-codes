#include<stdio.h>
// this program is about the array and how the array works 

int main(){
    int marks[3];

    printf("enter the marks of the subject1:");
    scanf("%d",&marks[0]);  // here &marks[0] is used to store the marks of 1 subject at oth position
    printf("enter the marks of the subject2:");
    scanf("%d",&marks[1]);   // here &marks[1] is used to store the marks of 2 subject at 1th position
    printf("enter the marks of the subject3:");
    scanf("%d",&marks[2]);   // here &marks[2] is used to store the marks of 3 subject at 2th position
    printf("the marks are :%d ,%d,%d\n",marks[0],marks[1],marks[2]);
int total = marks[0] + marks [1] + marks[2] ; // here the addition of all the marks are done using the array position 
printf("the total marks of the student is:%d\n",total);
int *ptr = &total; // here the data of the total is copied to ptr using * as pointer
int avrg = (*ptr/ 3) ;  // here the pointer ptr is divide to calculate the average 

printf("the average of the marks is :%d\n",avrg);
return 0;

}