// Write a program to Subtract matrices. 
#include<stdio.h>
int main()
{
    int n,m,p,q;
    printf("Enter the row and column 1st matrix\n");
    scanf("%d%d",&n,&m);
    printf("Enter the row and column of 2nd matrix ");
    scanf("%d%d",&p,&q);
     if(n!=p||m!=q){
        printf("Matrix addition not possible");
        return 0;
     } 
    printf("Enter the elements of 1st matrix\n");
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix \n");
     int b[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int c[n][m];
    printf("Resultant matrix =\n"); 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i][j] = a[i][j]- b[i][j];
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
return 0;
}