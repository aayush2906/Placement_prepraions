#include<bits/stdc++.h>
using namespace std;

int pair_candidate(int *arr,int n,int x)
{
	sort(arr,arr+n);
	int l=0,r=n-1;
	while(l<r)
	{
		if(arr[l]+arr[r]==x)
		{
			cout<<"Elements found:"<<arr[l]<<"\t"<<arr[r];
			return 1;
		}
		else
		(arr[l]+arr[r]<x)?l++:r--;
	}
	cout<<"Not found";
	return 0;
	
}

main()
{
	int n,x=0;
	cout<<"Sum:",cin>>x;
	cout<<"Size",cin>>n;
	int arr[n];
	
	cout<<"Elements::";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	pair_candidate(arr,n,x);
}
