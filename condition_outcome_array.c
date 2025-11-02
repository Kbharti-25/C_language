#include<stdio.h>
int main(){
    int n,i;
    int c;
    int positive=0,negative=0,odd=0,even=0,zero=0;
    printf("enter the number of the elements in array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the value of the element of array %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>0){
            positive=positive+1;
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]<0){
            negative=negative+1;
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even=even+1;
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]%2!=0){
            odd=odd+1;
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]==0){
            zero=zero+1;
        }
    }
    printf("number of positive numbers in array:%d\n",positive);
    printf("number of negative numbers in array:%d\n",negative);
    printf("number of even numbers in array:%d\n",even);
    printf("number of odd numbers in array:%d\n",odd);
    printf("number of zero in array:%d\n",zero);






    return 0;
}