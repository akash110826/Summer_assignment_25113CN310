// Write a program to Find column-wise sum.
#include<stdio.h>
int main()
{
    int n,m,column_sum=0;
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
     for(int j=0;j<m;j++)
     {
        column_sum = 0;
        for(int i=0;i<n;i++)
        {
            column_sum = column_sum + a[i][j];
        }
        printf("sum of comumn %d is %d \n",j,column_sum);

     }       
    return 0;
}