/*create an array of 5 numbers and copy all its elements into another array */
#include<stdio.h>
int main(){
    int arr[5];
    int copy[5];

for(int x = 0; x<= 4; x++){
    printf("enter the numbers in the array:");
    scanf("%d",&arr[x]);
}
for(int i = 0 ; i<= 4 ; i++){
    copy[i]= arr[i];
}

for (int i = 0 ; i <= 4 ; i++){
    printf("the copied values:%d\n",copy[i]);
}
return 0;
}
