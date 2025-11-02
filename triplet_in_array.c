#include<stdio.h>
int main(){
    int n,i,j,k;
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
            for(k=j+1;k<n;k++){
                if((arr[i]+arr[j]+arr[k])==15){
                    count=count+1;
                }
            }
        }
    }
    printf("total number of the pairs:%d",count);
}