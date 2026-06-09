// Write a program to Print repeated character pattern. 
// A 
// BB 
// CCC 
// DDDD 
// EEEEE 
#include<stdio.h>
int main()
{
    int n , i , j ;
    char A;
    printf("Enter the height of pattern");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c");
        }
        printf("\n",'A'+j);
    }
    return 0;
}