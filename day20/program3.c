// Write a program to Find row-wise sum. 
#include<stdio.h>
int main()
{
    int n,m,row_sum=0;
    printf("Enter the order of matrix ");
    scanf("%d%d",&n,&m);
    int a[n][m];
    printf("Enter the elements of matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }    
    for(int i=0;i<n;i++){
            row_sum =0;
        for(int j=0;j<m;j++)
        {
            row_sum = row_sum+a[i][j];
        }
        printf("sum of row %d is %d\n",i,row_sum);
        
    }   
    return 0;
}