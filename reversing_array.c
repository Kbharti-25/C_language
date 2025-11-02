#include<stdio.h> 
int main(){
    int n,i,j;
    printf("enter the number of the elements in array:");
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(i=0;i<n;i++){
        printf("enter the value of the element of array %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        arr2[n-1-i]=arr[i];
    }
    for(i=0;i<n;i++){
        printf("value of array-2:%d",arr2[i]);

    }
}
    


