#include<stdio.h>
#include<math.h>
// program for switch statement where 
/* m - monday , t - tuesday , w - wednesday , T - thursday , s - saturday , S - sunday
*/
int main(){
    char day;
    printf(" enter the day:");
    scanf("%C",&day);

    switch(day){
        case 'm': printf("the day is monday");
        break;
        case 't' : printf(" the day is tuesday");
        break;
        case 'w' : printf("the day is wednesday");
        break;
        case 'T': printf("the day is thursday");
        break;
        case 'f' : printf("the day is friday");
        break;
        case 's' : printf("the day is saturday");
        break;
        case 'S' : printf("the day is sunday");
        break;
        default : printf("invalid character");
    }
}