#include<stdio.h>
int main()
{
    int n,f,a[100],flag=0,i;
    printf("How many elements are there in your array:\n");
    scanf("%d",&n);
     printf("Enter elements:\n");
    for(i=0 ;i<n ;++i)
    {

        scanf("%d\n",&a[i]);
    }
    for(i=0;i<n ;i++){
        printf("%d ",a[i]);
    }
    printf("Which element you want to search:\n");
    scanf("%d",&f);
    for(i=0 ; i<n ; i++)
    {
        if(a[i]==f)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Element found,position is %d \n",i+1);
    }
    else{
        printf("elements not found\n");
    }
    return 0;


}
