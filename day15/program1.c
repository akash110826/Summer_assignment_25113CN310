// Write a program to Reverse array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int left = 0 , right = n-1;
    while(left < right)
    {
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;

        left++;
        right--;
    }
    printf("The reversed array ");
    for(int i=0;i<n;i++)
      { printf("%d  ",a[i]);
      }
      printf("\n");
       return 0;    
}