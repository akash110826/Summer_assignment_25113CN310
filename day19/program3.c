// Write a program to Transpose matrix. 
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the row and column  matrix\n");
    scanf("%d%d",&n,&m);
    printf("Enter the elements of matrix\n");
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
     int b[m][n];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            b[j][i] = a[i][j];
        }
     }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
     }   
      return 0;  
}