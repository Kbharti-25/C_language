#include<stdio.h>
int main(){
    int n,i,j;
    int count=0;
    printf("enter the number of the elements in array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the value of the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==10){
                count=count+1;

            }

        }
    }
    printf("number of the pairs is:%d",count);
}