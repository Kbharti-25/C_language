#include<stdio.h>
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){
    int n,k;
    printf("enter the first number:");
    scanf("%d",&n);
    printf("enter the second number:");
    scanf("%d",&k);
    printf("greatest common divisior:%d",gcd(n,k));
    

}