// Write a program to Write function for perfect number. 
#include<stdio.h>
int perfect(int a)
{
    int i ,sum =0;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        sum = sum +i;
    }
    return sum;
}
int main()
{
    int n , result ;
    printf("Enter the number: \n");
    scanf("%d",&n);
    result = perfect(n);
    if(n==result)
    printf("The entered number is perfect number");
    else
    printf("Entered number is not a perfect number");
    return 0;

}