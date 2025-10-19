#include<stdio.h>
int main(){
    int n,i;

    printf("enter the  number of the elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        printf("enter the element");
        printf("%d",i+1);
        printf(":");
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=0;i<=n-1;i++){
        if(max<=arr[i]){
            max=arr[i];
        }

    }
    printf("maximum element of the array:%d",max);


    return 0;
}