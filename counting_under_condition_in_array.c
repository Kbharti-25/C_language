#include<stdio.h>
int main(){
    int n,i;
    printf("enter the number of the elements in array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the value of the elements of array %d:",i+1);
        scanf("%d",&arr[i]);


    }
    int count=0;
    for(i=0;i<n;i++){
        if(arr[i]>100){
            count=count+1;
        }
    }
    printf("number of the elements greater than 100:%d",count);


}