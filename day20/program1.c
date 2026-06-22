// Write a program to Multiply matrices.
#include<stdio.h>
int main()
{
    int r1,c1;
    printf("Enter the row and column  of 1st matrix\n");
    scanf("%d%d",&r1,&c1);
    int r2,c2;
    printf("Enter the row and column of 2nd matrix\n");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)    {
        printf("matrix multiplication is not possible.");
        return 0;
    }
    int a[r1][c1];
    printf("Enter the elements of 1st matrix\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int b[r2][c2];
    printf("Enter the elements of 2nd matrix\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
     int c[r1][c2];
    for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(int k=0;k<c1;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("the resultant matrix  = \n");
    for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }        
 return 0;
}




