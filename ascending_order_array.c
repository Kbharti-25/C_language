#include<stdio.h>
int main(){
    int n,i,j;
    int c;
    printf("enter the number of the elements in array:");
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(i=0;i<n;i++){
        printf("enter the value of the element of array %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;

            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}