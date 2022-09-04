#include<stdio.h>
int main()
{

    int arr[100];
    int i,n,size;
    printf("Enter array size:");
    scanf("%d",&size);
    printf("Enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
