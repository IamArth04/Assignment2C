#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Two Number:");
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\na=%d b=%d",a,b);
    printf("\n");
    return 0;
}