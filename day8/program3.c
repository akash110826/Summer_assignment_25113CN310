// Write a program to Print character triangle. 
// A 
// AB 
// ABC 
// ABCD 
// ABCDE
#include<stdio.h>
int main()
{
    int n , i , j ;
    char A  ;
    printf("Enter the height of pattern");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",'A'+j);
        }
        printf("\n"); 
       
    }
     return 0;
}