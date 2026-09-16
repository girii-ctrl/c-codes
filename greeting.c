//this code is the recap of the functions 
#include<stdio.h>
void hindi();   //function declaration
void kannada();
void malayalam();

int main(){
    printf("enter the language:");
    char ch;
    scanf("%C",&ch);
    if(ch == 'h'){
        hindi(); //function call
    }
    else if(ch == 'k')
    {
        kannada();
    } else if(ch == 'm'){
malayalam();
    }else{
        printf("invalid");
    }
}
 // function definition
void hindi(){
    printf("namasthe!!");
}
void kannada(){
    printf("namaskara!!");
}
void malayalam(){
    printf("vanakam!!");
}