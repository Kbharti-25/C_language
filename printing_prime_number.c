#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool prime(int n){
    if(n<2){
        return false;
    }
    int limit=sqrt(n);
    for(int i=2;i<=limit;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;

}
int main(){
    int n;
    int i=2;
    int count=0;

    printf("enter the number to generate prime numbers upto that:");
    scanf("%d",&n);
    while(i<=n){
        if(prime(i)){
            printf("%d ",i);
            count=count+1;
        }
        i++;
    }
    printf("\n");
    return 0;
}