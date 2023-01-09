#include<stdio.h>
void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");
}
void insertion_sort(int arr[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(arr[j]>key && j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		
	 arr[j+1]=key;
	}
}
int main()
{
	
	int arr[]={12,45,3,1,17,88,65,2};
	int n=8;
	printf("Before sort array\n");
	display(arr,n);
	insertion_sort(arr,n);
	printf("After sorting array\n");
	display(arr,n);
	return 0;
}
