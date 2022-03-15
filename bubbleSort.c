//4. Write a C/C++/JAVA program to sort the data by using Bubble sort.
#include<stdio.h>
int main(void)
{
    int n;
    printf("\n Please Enter How Many Element:\t");
    scanf("%d",&n);

    int arr[n],i,j,temp;
    printf("\n Please Enter Your\n");
    for(i=0; i<n; i++)
    {
        printf(" Number_%d:\t",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("\n Sorted Elements are:\t");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    getch();
    return 0;
}
