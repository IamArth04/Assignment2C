#include<stdio.h>
int main(){
    int x;
    printf("Enter A Number:");
    scanf("%d",&x);
    if( (x&1) ==0)
    {
    printf("Even");
    }
    else
    {
    printf("odd");
    }
    
    return 0;
}