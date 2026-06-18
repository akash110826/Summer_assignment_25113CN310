// Write a program to Union of arrays.
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
        c[i]=a[i];
    int size = n;
    for(int i=0;i<m;i++){
        int found = 0;
        for(int j=0;j<size;j++){
        if(c[j] == b[i]){
        found = 1;
        break;
        }}
        if (found == 0)
        c[size++]=b[i];
    }
    for(int i=0;i<size;i++){
        printf("%d  ",c[i]);
    }
    return 0;
}