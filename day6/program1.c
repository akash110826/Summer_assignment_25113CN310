// Write a program to Convert decimal to binary. 
#include<stdio.h>
int main()
{
    int n, i=0 , binary[50] , j ;
    printf("Enter the number");
    scanf("%d",&n);
    if(n==0){
    printf("Binary = 0");
    }
    while(n>0)
    {
        binary[i] = n%2;
        n = n/2;
        i++; 
    }
    printf("Binary  =");
    for(j=i-1; j>=0; j--)
    {
        printf("%d",binary[j]);
    }
  return 0;  
}
