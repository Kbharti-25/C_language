#include <stdio.h>
int input(){
    int n;
    printf("enter the number of element in array:");
    scanf("%d",&n);
    return n;

}
int max(int arr[],int n){
    int i;
    int max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n=input();
    int arr[n];
    printf("enter the value of elements in array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int maximum=max(arr,n);
    printf("maximum element of array:%d",maximum);

}