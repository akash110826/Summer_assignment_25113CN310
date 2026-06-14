// Write a program to Find duplicates in array. 
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of terms");
    scanf("%d",&n);
    printf("Enter the elements");
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Duplicate elements: ");
    int found = 0;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d\t",a[i]);
                found = 1;
                break;
            }
        }
    }
    if(!found)
    printf("None");
    printf("\n");
    return 0;

}