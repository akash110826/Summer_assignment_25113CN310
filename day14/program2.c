// Write a program to Frequency of an element. 
#include<stdio.h>
int main()
{
    int a[50],n,i,count=0,key;
    printf("Enter the number of elemrnt");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the values");
        scanf("%d",&a[i]);
    }
    printf("Enter the key element");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        count++;
    }
    printf("the frequency of %d is %d",key,count);
    return 0;
}