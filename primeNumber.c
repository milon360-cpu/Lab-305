//. Write a C/C++/JAVA program to find the prime number.
#include<stdio.h>
int main(void)
{
     int n;
     printf("\n Please Enter Your Value For check prime or not:\t");
     scanf("%d",&n);
     if(n==1 || n==0)
     {
         printf(" Sorry! Prime number starts from two");
         getch();
         return 0;
     }
     int counter = 0,i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            counter++;
            break;
        }
    }
    if(counter==0)
    {
        printf("\n %d is a prime number",n);
    }
    else
    {
          printf("\n %d is not prime number",n);
    }

    getch();
    return 0;
}
