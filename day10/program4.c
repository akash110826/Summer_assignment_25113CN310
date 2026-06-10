// Write a program to Print character pyramid. 
//     A 
//    ABA 
//   ABCBA 
//  ABCDCBA 
// ABCDEDCBA
#include<stdio.h>
int main()
{
    int n , i ,j , k , l ;
    char A;
    printf("Enter the height of pattern");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
           printf("%c",'A'+k);
        }
        for(l=i-1;l>=A;l--)
        {
            printf("%c",'A'+l);
        }
        printf("\n");
    }
    return 0;
}