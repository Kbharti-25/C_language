#include<stdio.h>
int main(){
    int i,j,n,m;
    int op;
    printf("enter the number of rows in 2d array");
    scanf("%d",&n);
    printf("enter the number of columns of 2d array");

    scanf("%d",&m);
    int arr[n][m];
    int rowsum;
    int columnsum;
    printf("enter the value of the element in 2d array\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("choose operation to perform(1 for rowsum 2 for columnsum)");

    scanf("%d",&op);
    if(op==1){
        for(i=0;i<n;i++){
             rowsum=0;
            for(j=0;j<m;j++){
                rowsum=rowsum+arr[i][j];

            }
            printf("row sum of is:%d",rowsum);
            printf("\n");
        }
    }
    else if(op==2){
        for(j=0;j<n;j++){
            columnsum=0;
            for(i=0;i<n;i++){
                columnsum=columnsum+arr[i][j];
            }
            printf("column sum of is:%d",columnsum);
            printf("\n");

        }
    }
    else{
        printf("entered choice is invalid");
    }
    


    return 0;
}