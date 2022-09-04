#include <stdio.h>
int main()
{
int i,j, low, high, mid, n, key, array[100],temp;
printf("Enter number of element:");
scanf("%d",&n);
printf("Enter %d integers:", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	printf("Sorted array in ascending order: ");
	 for(i=0;i<n ;i++){
        printf("%d ",array[i]);
        }
printf("\nEnter value to find:");
scanf("%d", &key);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(array[mid] < key)
low = mid + 1;
else if (array[mid] == key) {
printf("%d found at location %d", key, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found. %d isn't present in the list.n", key);
return 0;
}
