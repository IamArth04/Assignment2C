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

#include<iostream>
using namespace std;
int main() {
    int a=123;
    int rem=0, sum=0;

    rem=a%10; //123%10=3   "if we 123 ko mod% krte hai to sehphal aata hai AND divide/ krte hai to Bhaghphal aata hai
    a=a/10; //123/10=12
    sum=sum+rem; //0+3=3

    rem=a%10; //12%10=2
    a=a/10; //12/10=1
    sum=sum+rem; //3+2=5

    rem=a%10; //1%10=1
    a=a/10; //1/10=0
    sum=sum+rem; //5+1=6

    cout<<sum<<endl;


    return 0;
}
