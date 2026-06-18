// Write a program to Merge arrays.
#include<stdio.h>
int main()
{
    int n , m ;
    printf("Enter the size of 1st array ");
    scanf("%d",&n);
    printf("Enter the elements ");
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter the size of 2nd array ");
    scanf("%d",&m);
    printf("Enter the elements ");
    int b[m];
    for(int i=0;i<m;i++)
    scanf("%d",&b[i]);

    int c[n+m];
    for(int i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<m;i++)
    {
        c[n+i]=b[i];
    }
    for(int i=0;i<n+m;i++)
    printf("%d ",c[i]);
    return 0;
}