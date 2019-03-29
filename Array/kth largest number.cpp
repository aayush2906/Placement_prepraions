#include<bits/stdc++.h>
using namespace std;

void largest_number(int *arr,int n,int k)
{
	int t=0;
		
	while(t!=k){
		int l=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]>l)
			l=arr[i];
		}
			if(t==k-1)
				cout<<l;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==l)
			{
				arr[i]=arr[i+1];
				n=n-1;
				t=t+1;
			}
			
		}
	}
		
}

int main()
{
	int n,k;
	cout<<"Enter size of array",cin>>n;
	int arr[n];
	cout<<"k::",cin>>k;
	
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	largest_number(arr,n,k);
}
