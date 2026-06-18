// Write a program to Find common elements. 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of 1st array");
    scanf("%d",&n);
    printf("Enter the elements ");
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int m;
    printf("Enter the size of 2nd array");
    scanf("%d",&m);
    printf("Enter the elements ");
    int b[m];
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    printf("Common elements = ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
            printf("%d  ",a[i]);
             break;
            }
        }
    }
    return 0;
}