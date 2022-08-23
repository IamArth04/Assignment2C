#include<stdio.h>
int main(){
    int N;
    printf("Enter a Number:");
    scanf("%d",&N);
    printf("Unit digit of %d is %d",N,N%10);
    printf("\n");
    return 0;
}