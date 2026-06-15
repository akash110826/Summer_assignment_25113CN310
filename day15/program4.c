// Write a program to Move zeroes to end.
#include<stdio.h>
int main()
{
    int n , temp ;
    printf("Enter the size ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(int i =0;i<n;i++){
    scanf("%d",&a[i]);
    }
    int pos = 0;
    for(int i=0;i<n;i++){
     if(a[i]!=0){
        a[pos] = a[i];
        pos++;
     }
    }
    while(pos<n){
        a[pos]=0;
        pos++;
    }
    printf("afrer moving resultant array ");
    for(int i = 0;i<n;i++ )
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}