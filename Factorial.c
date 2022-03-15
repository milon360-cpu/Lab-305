//. Write a C/C++/JAVA program to find the factorial by using recursion
#include<stdio.h>
int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main(void)
{
    int n;
    printf("\n Please Enter Number of Factorial:\t");
    scanf("%d",&n);
    int result  = factorial(n);
    printf("\n Value of Factorial:\t%d",result);


    getch();
    return 0;
}
