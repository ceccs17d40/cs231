//Insertion Sort
#include<stdio.h>
void insort(int arr[], int n)
{
   	int i,flag,j;
  	for(i=1;i<n;i++)
   	{
       	flag=arr[i];
       	j=i-1;
       	while((j>=0)&&(arr[j]>flag))
       	{
           	arr[j+1]=arr[j];
           	j=j-1;
       	}
       	arr[j+1]=flag;
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
    	insort(arr,n);
   	printf("Sorted array: \n");
	for(i=0;i<n;++i)
	{
		printf("%d\n",arr[i]);
	}
 	return 0;
}
