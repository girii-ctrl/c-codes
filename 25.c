#include<stdio.h>
// write a function that prints namaste if user is indian and bonjour if the user is french
void indian();
void french();


int main(){
    char greet;
    printf("are you indian or french :");
    //if indian type I and if french type F
    scanf("%C",&greet);

    if (greet == 'I'){
        indian();
    }else if ( greet == 'F'){
        french();
    }else{
        printf("not defined");
    }return 0;
}

void indian(){
    printf("Namaste");
}

void french(){
    printf("Bonjour");
}