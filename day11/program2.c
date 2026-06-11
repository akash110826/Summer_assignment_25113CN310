// Write a program to Write function to find maximum. 
#include<stdio.h>
int max(int a , int b)
{
    if(a>b)
    return a;
    else
    return b ;
}
int main()
{
    int a , b , maximum;
    printf("Enter the numbers");
    scanf("%d%d",&a,&b);
    maximum = max(a ,b);
    printf("maximum = %d",maximum);
    return 0;

}