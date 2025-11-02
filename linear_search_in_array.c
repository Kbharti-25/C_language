#include<stdio.h>
int main(){
    int i,n,item;
    int check=0;
    int sum=0;
    printf("enter the number of the elements in array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the value of the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter the item to search:");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(item==arr[i]){
            check=check+1;
            break;
        }
        else{
            check=0;
        }
        
        }
        if(check==1){
            printf("item is in aaray");
        }
        else{
            printf("item is not in array");
        }
        return 0;
    }

