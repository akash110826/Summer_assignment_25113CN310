// Write a program to Find missing number in array. 
#include<stdio.h>
int main()
{
    int n , actual_sum = 0;
    printf("Enter the size");
    scanf("%d",&n);
    int a[n-1];
    printf("Enter the elements ");
    for(int i=0;i<n-1;i++){
    scanf("%d",&a[i]);
     actual_sum = actual_sum + a[i];
    }
    // expected  sum 
    int expected_sum = (n*(n+1))/2;
        
    // missing number 
    int missing_number = expected_sum - actual_sum ;
    printf("%d is the missing number",missing_number);
    return 0 ;
}
