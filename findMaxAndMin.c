//Write a C/C++/JAVA program to find the MAX & MIN value of an array
#include<stdio.h>
int main(void)
{
    int max,min,i,n;
    printf(" Please Enter How Many Element:\t");
    scanf("%d",&n);
    int arr[n];
    printf("\n Please Enter Element \n");
    for(i=0; i<n; i++)
    {
        printf(" Number_%d:\t",(i+1));
        scanf("%d",&arr[i]);
    }
   max = arr[0];
   min = arr[0];
   for(i=0; i<n; i++)
   {
       if(arr[i]>max)
       {
           max = arr[i];
       }
       else if(arr[i]<min)
       {
           min = arr[i];
       }
   }
    printf("\n Maximum Number:\t%d",max);
    printf("\n Minimum Number:\t%d",min);

    getch();
    return 0;
}
