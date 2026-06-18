// Write a program to Binary search. 
#include<stdio.h>
int main()
{
    int n,key,found=0;
    printf("Enter the size ");
    scanf("%d",&n);
    printf("Enter the elements\n ");
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the key ");
    scanf("%d",&key);
    int low=0,heigh = n-1;
    while (low<=heigh)
    {
    int mid = (low+heigh)/2;
    if(key==a[mid]){
        found = mid;
        break;
    }
    else if(key < a[mid])
    heigh = mid -1;
    else 
    low = mid + 1;
    }
    if(found != 0)
    printf("found ");
    else
    printf("%d does not exist",key);
    return 0 ;
}    