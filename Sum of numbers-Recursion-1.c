#include<stdio.h>
int sum(int n);
int main()
{
    int k,n;
    printf("Enter a number");
    scanf("%d",&n);
    k=sum(n);
printf("The result is %d",k);
}
int sum(int n)
{
    int c;
    if(n==1)
    return 1;
    c=n+sum(n-1);
    return c;
}
