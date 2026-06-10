// Write a program to Print reverse pyramid. 
// ********* 
//  ******* 
//   ***** 
//    *** 
//     * 
#include<stdio.h>
int main()
{
    int n , i , j , k ;
    printf("Enter the height of pattern");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=(2*n+1)-2*i;k++)
        {
            printf("*");
        }
       printf("\n");
    }
      return 0;
}