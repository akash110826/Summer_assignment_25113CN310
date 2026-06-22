// Write a program to Check symmetric matrix
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the order of matrix ");
    scanf("%d%d",&n,&m);
    int a[n][m];
    if(n!=m){
    printf("Mtrix can't be symmtic");
    return 0;
    }
    printf("Enter the elements of matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }    
    int symmtric =0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            symmtric++;
        }
    }
    if(symmtric == 0)
    printf("It is a symmetric matrix");
    else
    printf("It is not a symmetric matrix");

    return 0;

}