#include<stdio.h>
//program to give grades to the students 
/*marks < 30 is c
30<= marks < 70 is B 
70<= marks <90 is A
90 <= marks <= 100 is A+*/
int main(){
    int marks;
    printf("enter the marks scored by the student:");
    scanf("%d",&marks);
    printf("the marks scored by the student is :%d\n",marks);

    if (marks < 30 ){
        printf("student got C grade");
    }
    else if(marks >= 30 && marks <70){
        printf("student got B grade");
    }
    else if(marks>= 70 && marks < 90){
        printf("student got A grade");
    }else{
        printf("congrats student got A+ grade");
    }
}