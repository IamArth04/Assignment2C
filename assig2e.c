#include<stdio.h>
int main(){
    int x=354;
    int rem=0 , sum=0;

    rem = x%10;
    x = x/10;
    sum = sum + rem;

    rem = x%10;
    x = x/10;
    sum = sum + rem;

    rem = x%10;
    x = x/10;
    sum = sum + rem;

    printf("Sum of the digits is %d",sum);
    return 0;
}