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
    int r;
    int c;
    printf("enter n in ncr:");
    scanf("%d",&n);
    printf("enter r in ncr:");
    scanf("%d",&r);
    c=n-r;
    int nfact=factorial(n);  
    int nrfact=factorial(c);
    int npr=nfact/(nrfact);
    printf("%d",npr);
    return 0;
}