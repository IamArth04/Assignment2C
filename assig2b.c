#include<stdio.h>
int main(){
    int x;
    printf("Enter a Number:");
    scanf("%d",&x);
    printf("Number without last digit = %d",x/10);
    printf("\n");
    return 0;
}