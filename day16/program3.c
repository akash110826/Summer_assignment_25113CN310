// Write a program to Find pair with given sum.
#include<stdio.h>
int main()
{
    int n,sum,result=0;
    printf("Enter the size");
    scanf("%d",&n);
      int a[n];
    printf("Enter the elements ");
    for(int i=0 ; i<n ;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the sum: ");
    scanf("%d",&sum);
    for(int i = 0 ;i<n ; i++)
    {
        for(int j=i+1;j<n;j++)
        {
         if(a[i]+a[j] == sum)
         {
            printf("%d,%d is the pair with required sum\n",a[i],a[j]);
         }

        }
    }
    return 0;
}