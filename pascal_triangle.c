#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;

    }
    return fact;


}
int combination(int x,int y){
    
    int nfact=factorial(x);
    int rfact=factorial(y);
    int nrfact=factorial(x-y);
    int ncr=nfact/(rfact*nrfact);
    return ncr;
}
int main(){
    int n,i,j;
    int num;
    printf("enter number of rows in pascal triangle:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            num=combination(i,j);
            printf("%d\t",num);


        }
        printf("\n");
    }
}