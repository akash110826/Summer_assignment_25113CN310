// Write a program to Print reverse star pattern. 
// ***** 
// **** 
// *** 
// ** 
// * 
#include<stdio.h>
int main()
{
    int n , i ,j ;
    printf("Enter the height of pattern");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("*");
        }

        printf("\n");
        
    }
    return 0;
}