//program to find if a character is upper case or not 
/* a - lower case
A - upper case*/ 
#include<stdio.h>
#include<math.h>
int main(){
    char ch;
    printf("enter the letter :");
    scanf("%C",&ch);
    
    if (ch>= 'A' && ch <='Z'){
printf("the entered letter is in upper case");
    }
    else if (ch >= 'a' && ch <= 'z' ){
        printf("the entered letter is in lower case ");
    }else {
        printf("invalid letter");
    }return 0;
}