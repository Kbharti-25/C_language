#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;


    }
    return fact;

}
int main(){
    int n;
    printf("enter the number to find factorial:");
    scanf("%d",&n);
    int c=factorial(n);
    printf("factorial of given number is:%d",c);
}
