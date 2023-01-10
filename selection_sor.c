#include<stdio.h>
void selection_sort(int arr[],int n)
{
	int i,j,index,temp;
	for(i=0;i<n-1;i++)
	{
		index=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[index])
			{
				index=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[index];
		arr[index]=temp;
		
	}
}
void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
		
	}
	printf("\n");
}
int main()
{
	int arr[]={8,0,7,4,9,4,5};
	int n=7;
	printf("Before sorting the array:\n");
	display(arr,n);
	selection_sort(arr,n);
	printf("\nAfter sorting the array:\n");
	display(arr,n);
	return 0;
}
