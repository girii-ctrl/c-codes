#include<stdio.h>
#include<math.h>
//print all the odd numbers from 5 to 20
int main(){
    for (int n = 5 ; n <= 20 ; n++){
        if (n % 2 == 0){
            continue;
        }
        printf("%d\n",n);
    }
    return 0;
}