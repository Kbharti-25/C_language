#include<stdio.h>
int main(){
    int n,i;
    printf("enter the  number of elements of array:");
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<=n-1;i++){
        printf("enter the elements of array:");
        scanf("%d",&arr[i]);


    }
    for(i=0;i<=n-1;i++){
        printf("%d",arr[i]);
        printf("\t");
    }
    return 0;
}