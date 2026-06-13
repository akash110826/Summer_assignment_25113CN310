// Write a program to Find largest and smallest element. 
#include<stdio.h>
int main()
{
    int a[50], n , i , max  , min ;
    printf("Enter the number of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the value");
        scanf("%d",&a[i]);
    }
         max=a[0];
        min=a[0];
    for(i=0;i<n;i++)
    {
         if(a[i]>max)
        {
            max = a[i];
        }
        if(a[i]<min)
        {
            min  = a[i];
        }    
    }
    printf("the lagest number :%d\nthe smallest number: %d",max,min);
    return 0;
    
}