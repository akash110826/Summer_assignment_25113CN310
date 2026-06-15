// Write a program to Rotate array right. 
#include<stdio.h>
int main()
{
    int n , d;
    printf("Enter the size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements ");
    for(int i =0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the no of rotation ");
    scanf("%d",&d);
    for(int r=0;r<d;r++){
        int temp = a[n-1];
        for(int i=n-2;i>=0;i--){
            a[i+1] = a[i];
        }
        a[0] = temp;
    }
    printf("After %d rotation ",d);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}