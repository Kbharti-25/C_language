#include<stdio.h>
int main(){
    int n,i;
    int sum=0;
    printf("enter the number of the element in array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the value of the element in array %d:",i+1);
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++){
        if(i%2!=0){
            sum=sum+arr[i];


        }
    }
    printf("sum of the odd index element is:%d",sum);
    return 0;
}