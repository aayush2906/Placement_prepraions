//an element is peak if its not smaller than its neighbours
#include<bits/stdc++.h>
using namespace std;

void peak(int *arr,int n)
{
	int t=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>arr[i+1]&&arr[i]>arr[i-1])
			{
				cout<<"Peak element::"<<arr[i]<<endl;
				t=0;
			}
		
		
	}
	if(t==-1)
	cout<<"No peak element";
	
}
main()
{
	int n;
	cout<<"Size:",cin>>n;
	int arr[n];
	cout<<"Elements::";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	peak(arr,n);
}
