#include<stdio.h>
// program to check if a student passed or failed in ternary form 
/* marks >= 30 - pass
marks <= 30 - fail*/
int main(){
    int marks;
    printf("enter the marks of the student :");
    scanf("%d",&marks);
    printf("the marks scored by the student in the exam :%d\n",marks);
    
    //ternary form
    marks>= 30 && marks <= 100 ? printf ("the student passed in the exam"): printf("the student got failed in the exam");
    
    return 0;
}