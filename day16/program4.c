// Write a program to Remove duplicates from array. 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
               for(int k=j;k<n-1;k++)
               {
                a[k]=a[k+1];
               }
               n--;
               j--;
            }
        }
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d ",a[j]);
    }
    
return 0;
}