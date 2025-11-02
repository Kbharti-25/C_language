#include<stdio.h>
int main(){
    int n,i;
    int l,h;
    printf("enter the number of the elements in array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the value of the element of array %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("enter the lower limit:");
    scanf("%d",&l);
    printf("enter the higher limit:");
    scanf("%d",&h);
    if(l<n && h<n){
    for(i=l;i<=h;i++){
        printf("%d",arr[i]);


    }
}
else{
    printf("invalid input of index");
}


}