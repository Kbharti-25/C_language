#include<stdio.h>
int main(){
    int n,i;
    int sum1=0;
    int sum2=0;
    printf("enter the number of the element in array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the value of element %d:",i+1);
        scanf("%d",&arr[i]);


    }
    for(i=0;i<n;i=i+2){
        sum1=sum1+arr[i];
    }
    for(i=1;i<n;i=i+2){
        sum2=sum2+arr[i];
    }
    printf("the differenec between the sum of the even index and the odd index:%d",sum2-sum1);

}