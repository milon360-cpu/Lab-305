    #include<stdio.h>
    int main(void)
    {
    int i,middle,element,left = 0,right;
    int arr[] = {11,20,32,41,53,63,78,84,91};
    right = sizeof(arr)/sizeof(arr[0]);
    printf(" Please Enter Your Searching Number:\t");
    scanf("%d",&element);
    while(left<=right)
    {
        middle = (left+right)/2;
        if(arr[middle]==element)
        {
            printf("\n Your Finding number is %d and position %d",arr[middle],middle+1);
            getch();
            return 0;
        }
        else if (arr[middle]<element)
        {
            left = middle+1;
        }
        else
        {
            right = middle -1;
        }
    }
    printf("\n Item not found");

    getch();
        return 0;
    }
