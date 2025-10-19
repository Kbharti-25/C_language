#include<stdio.h>
int main(){
    int n,i;
    int sum=0;
    printf("enter the number of elements in array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        printf("enter the element");
        printf("%d",i+1);
        printf(":");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n-1;i++){
        sum=sum+arr[i];
    }
    printf("sum of the elements is:%d",sum);

    return 0;
}