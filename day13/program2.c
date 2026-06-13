// Write a program to Find sum and average of array.
#include<stdio.h>
int main()
{
    int a[50],n,i,sum=0;
     float average;
    printf("Enter the number of terms");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the value:");
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    average = sum/n;
    printf("the sum = %d\nthe average =%.2f",sum,average);
    return 0;
}