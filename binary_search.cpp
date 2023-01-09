#include<iostream>
using namespace std;
int pivot(int arr[],int n)
{
	int c=0;
	int s=0;int en=n-1;
	int mid=s+(en-s)/2;
	while(s<en)
	{
		
		if(arr[mid]>=arr[0])
		{
			s=mid+1;
		}
		
		else{
			en=mid;
		}
		mid=s+(en-s)/2;
	}
	return s;
	
}
int main()
{
	int n=6;
	int arr[6]={1,7,3,6,5,6};
	int ans=pivot(arr,n);
	cout<<ans;
	return 0;
}

