#include<stdio.h>
void bubble_sort(int A[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
}
void display(int A[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d ",A[i]);
	}
}
int main()
{

	int A[]={2,1,5,6,3};
	int n=5;
	
	printf("before sort:\n");
	display(A,n);
	bubble_sort(A,n);
	printf("\nafter sort:\n");
	display(A,n);
	return 0;
}
