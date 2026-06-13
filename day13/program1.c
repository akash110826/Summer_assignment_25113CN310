// Write a program to Input and display array. 
#include<stdio.h>
int main()
{
    int a[50] , i , n ;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the values:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;

}