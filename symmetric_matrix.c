#include<stdio.h>
int main(){
    int n,m,i,j;
    int check=1;
    printf("enter the number of rows in matrix:");
    scanf("%d",&n);
    printf("enter the number of columns of matrix:");
    scanf("%d",&m);
    int arr[n][m];
    printf("enter the value of element in matrix");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(arr[i][j]==arr[j][i]){
                int check=1;
            }
        }
    }
    if(check==1){
        printf("matrix is symmetric");

    }
    else{
        printf("it is not symmetric");
    }
    return 0;
}