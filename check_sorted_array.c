#include<stdio.h>
int main(){
    int n,i;
    int c;
    int check;
    printf("enter the number of element in array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the choice for checking(0 for asceneding and 1 for descending):");
    scanf("%d",&c);
    for(i=0;i<n;i++){
        printf("enter the value of array %d:",i);
        scanf("%d",&arr[i]);
    }
    if(c==0){
        for(i=0;i<n;i++){
            if(arr[i]<=arr[i+1]){
                 check=1;
            }
            else if(arr[i]>arr[i+1]){
                 check=0;
            }
        }

    }
    else if(c==1){
        for(i=0;i<n;i++){
            if(arr[i]>=arr[i+1]){
                check=1;
            }
            else if(arr[i]<arr[i+1]){
                check=0;
            }
        }
    }
    else{
        printf("invalid input for sorting");
    }
    if(check=1){
        printf("array is sorted in user way");
    }
    else if(check=0){
        printf("array is not sorted in user way");
    }

    return 0;

}