// Write a program to Rotate array left. 
#include<stdio.h>
int main()
{
int n,d;
printf("Enter the size: ");
scanf("%d",&n);
int a[n];
printf("Enter the elements ");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
printf("How many rotations? ");
scanf("%d",&d);
for(int r=0;r<d;r++)
{
     int temp = a[0];
    for(int i=0;i<n-1;i++)
    {
        a[i] = a[i+1];    
    }
       a[n-1] = temp;
}
printf("After %d rotations ",d);
for(int i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
printf("\n");
return 0;
}
