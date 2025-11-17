#include<stdio.h>
int main(){
    int n,m;
    int i,j;
    printf("enter number of rows in 2d array:");
    scanf("%d",&n);
    printf("enter number of columns in 2d array:");
    scanf("%d",&m);
    int arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }

    }
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",arr[i][j]);

        }
        printf("\n");

    }
    
    
    
    return 0;
}