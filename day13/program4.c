// Write a program to Count even and odd elements. 
#include<stdio.h>
int main()
{
int a[50] , n , i ,even =0 , odd = 0;
printf("Enter the number of terms");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter the value");
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    even++;
    else
    odd++;
}
printf("The number of even element is %d\nThe number of odd element is %d",even,odd);
return 0;

}