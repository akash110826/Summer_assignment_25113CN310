// Write a program to Second largest element.
#include<stdio.h>
int main()
{
    int a[50],n,i,largest,second_largest;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the elements");
        scanf("%d",&a[i]);
    }
    largest = a[0];
    second_largest= a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
        largest = a[i];
    }
    for ( i = 0; i < n; i++)
    {
        if(a[i]>second_largest && a[i]!=largest)
        second_largest = a[i];
    }
    printf("The second largest number is %d",second_largest);
    
    return 0;
}