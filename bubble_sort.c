//Bubble Sort
#include <stdio.h>
void bsort(int arr[],int n)
{
	int i,j,temp;
   	for(i=n-1;i>=0;i--)  
	{   
		for(j=0;j<i;j++)
		{
       		if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}		
		}
	}
}
int main(void)
{
    int arr[25],n,i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;++i)
	{
		scanf("%d",&arr[i]);
	}
    	bsort(arr,n);
   	printf("Sorted array: \n");
	for(i=0;i<n;++i)
	{
		printf("%d\n",arr[i]);
	}
 	return 0;
}
