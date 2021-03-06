// Pranay Prince
// S3D
// 40

#include<stdio.h>
int merge(int a[],int l,int m,int r)
{
	int i,j,k,b[100];
	i=l;
	k=0;
	j=m+1;
	while(i<=m&&j<=r)
	{
		if(a[i]<a[j])
		{
			b[k++]=a[i];
			i++;
		}
		else
		{
			b[k++]=a[j];
			j++;
		}
	}
	while(i<=m)
	{
		b[k++]=a[i++];
	}
	while(j<=r)
	{
		b[k++]=a[j++];
	}
	while(j>l)
	{
		a[--j]=b[--k];
	}
}
int mergeSort(int a[],int l,int r)
{
	if(l<r)
	{
		int m=l+(r-l)/2;
		mergeSort(a,l,m);
		mergeSort(a,m+1,r);
		merge(a,l,m,r);
	}
}
int printArray(int a[],int size)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
}
int main(void)
{
	int i,a[100],size;
	printf("Enter size of the array:");
	scanf("%d",&size);
	printf("Enter array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	mergeSort(a,0,size-1);
	printf("\nSorted Array:\n");
	printArray(a,size);
	return(0);
}
