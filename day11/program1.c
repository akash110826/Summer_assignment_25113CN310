// Write a program to Write function to find sum of two numbers. 
#include<stdio.h>
int sum(int a ,int b)
{
    return a + b;
}
int main()
{
    int a , b , result;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    result = sum(a,b);
    printf("%d",result);
    return 0 ;

}