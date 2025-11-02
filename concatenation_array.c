#include<stdio.h>
int main(){
    int i,j,n1,n2;
    printf("enter the number of the element of first array:");
    scanf("%d",&n1);
    printf("enter the number of the element of second array:");
    scanf("%d",&n2);
    int arr1[n1];
    int arr2[n2];
    for(i=0;i<n1;i++){
        printf("enter the value of the element in array1 %d:",i);
        scanf("%d",&arr1[i]);

    }
    for(j=0;j<n2;j++){
        printf("enter the value of the element in array2 %d:",j);
        scanf("%d",&arr2[j]);

    }
    int arr3[n1+n2];
    for(i=0;i<n1;i++){
        arr3[i]=arr1[i];
    }
    for(j=0;j<n2;j++){
        arr3[j+n1]=arr2[j];
    }
    printf("concatenated array is:\n");
    for(i=0;i<n1+n2;i++){
    
    printf("%d\t",arr3[i]);
}
return 0;
}