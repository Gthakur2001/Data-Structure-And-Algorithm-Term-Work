#include<iostream>
using namespace std;
void linear(int arr[],int x,int n){
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			cout<<"Element is present";
		}
		
	}
	cout<<"Element is not present";
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int x;
	cin>>x;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	linear(arr,x,n);
	return 0;
}
