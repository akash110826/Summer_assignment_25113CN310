// Write a program to Find diagonal sum.
#include<stdio.h>
int main()
{
    // for square matrix.
    int n,sum=0;
    printf("Enter the order of  matrix\n");
    scanf("%d",&n);
    printf("Enter the elements of matrix\n");
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j||i+j==n-1){
                sum = sum+a[i][j];
            }
        }
    }
    printf("The diagonal sum = %d",sum);
    return 0 ;
}    