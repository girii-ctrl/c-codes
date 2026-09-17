#include<stdio.h>
// program to check if a student passed or failed 
/* marks >= 30 - pass
marks <= 30 - fail
*/ int main(){
    int marks;
    printf(" enter the marks of the student:");
    scanf("%d",&marks);
printf("the marks of the student:%d\n",marks);
    if(marks >= 30 && marks<= 100){
        printf("the student is passed");
    }
    else{
        printf("the student got failed in exam");
    }
    return 0;
}