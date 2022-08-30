#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
printf("enter the elements:");

int n,position,i;
scanf("%d",&n);

printf("enter the element positons:");
scanf("%d",&position);

for(i=4;i>position-1;i--){

        arr[i+1]=arr[i];
}
arr[position-1]=n;

for(i=0;i<5;i++){
    printf("%d\t", arr[i]);
}
return 0;

}
