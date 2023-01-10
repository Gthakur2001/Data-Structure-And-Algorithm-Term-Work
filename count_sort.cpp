#include<iostream>
using namespace std;
int max(int arr[],int n)
{
	int m=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>m)
		{
			m=arr[i];
		}
	}
	return m;
}
void count_sort(int arr[],int n)
{
	int result[n];
	int m=max(arr,n);
	int count[m+1];
	for(int i=0;i<=m;i++)
	{
		count[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		count[arr[i]]++;
	}
	for(int i=1;i<=m;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(int i=n;i>0;i--)
	{
		result[--count[arr[i]]]=arr[i];
	}
	for(int i=0;i<n;i++)
	{
		arr[i]=result[i];
		
	}
}
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[]={8,1,8,1,8,1,5};
	int n=7;

	count_sort(arr,n);
	print(arr,n);
}
