#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10];
    int n,m,k,l,t,u;
    int i,z;
    printf("enter the dimension of a:");
    scanf("%d %d",&n,&m);
    printf("enter the dimension of b:");
    scanf("%d %d",&k,&l);
    if(n==k&&m==l){
        printf("enter the value of array a\n");
        for(i=0;i<n;i++){
            for(z=0;z<m;z++){
                scanf("%d",&a[i][z]);
            }
        }
        printf("enter the value of array b\n");
        for(i=0;i<k;i++){
            for(z=0;z<l;z++){
                scanf("%d",&b[i][z]);
            }
        }
        for(i=0;i<n;i++){
            for(z=0;z<m;z++){
                c[i][z]=a[i][z]+b[i][z];
            }
        }
        for(i=0;i<n;i++){
            for(z=0;z<m;z++){
                printf("%d ",c[i][z]);
            }
            printf("\n");
        }
    }
    else{
        printf("cannot perform addition");
    }
    return 0;
}