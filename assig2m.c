#include<stdio.h>
int main(){
    int a;
    int rem=0;
    printf("Enter a Three-Digit Number: ");
    scanf("%d",&a);

    rem=a%10;
    a=a/10;
    a=rem*100+a;

    printf("It's Rotate Digits are %d",a);
    printf("\n");
    return 0;
}