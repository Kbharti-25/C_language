#include<stdio.h>
int main(){
    int n,i;
    printf("enter the number of the elements in array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the value of elements of the array %d:",i+1);
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i=i+2){
        arr[i]=arr[i]+10;
    }
    for(i=1;i<n;i=i+2){
        arr[i]=arr[i]*2;

    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\t");
    }

    return 0;
}