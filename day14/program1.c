// Write a program to Linear search.
#include<stdio.h>
int main()
{
    int a[50],n,i,j,key,temp=0;
    printf("Enter the number of element");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENter the values: ");
        scanf("%d",&a[i]);
    }
    printf("Enter the searching element");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
        printf("the element found at position %d",i+1);  
        temp++;
        break;
        } 
    }
    if(temp==0)
    {
        printf("the element does not found");
    }
    return 0;
}