#include<stdio.h>
int main(){
    int n,i;

    printf("enter the  number of the elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        printf("enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(i=0;i<=n-1;i++){
        if(min>=arr[i]){ /*it checks the minimum condition of array */
            min=arr[i];
        }

    }
    printf("minimum element of the array:%d",min);


    return 0;
}