#include<stdio.h>
int main(){
    int n,i,j;
    int check;
    printf("enter the number of the element in array:");
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(i=0;i<n;i++){
        printf("enter the value of the element %d:",i+1);
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++){
        arr2[n-i-1]=arr[i];

    }
    for(i=0;i<n;i++){
        if(arr[i]==arr2[i]){
            check=1;

        }
        else if(arr[i]!=arr2[i]){
            check=0;
        }

    }
    if(check==1){
        printf("array is pallindrome");
        
    }
    else if(check==0){
        printf("array is not pallindrome");
    }
    return 0;
}