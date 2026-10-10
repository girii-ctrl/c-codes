#include<stdio.h>
//write 2 functions one to print "hello" and other to print "good bye"
void hello();
void goodbye();
  int main(){
    char greet;
    printf("enter any letter either h or g :");
    scanf("%C",&greet);
     
    if(greet == 'h'){
        hello();
        return 0;
    }else if (greet == 'g'){
        goodbye();
        return 0;
    }else{
        printf("invalid letter !!");
    }
}

void hello(){
    printf("hello user !!");
}

void goodbye(){
    printf("goodbye user !!");
}