#include<bits/stdc++.h>

using namespace std;
main()
{
	int n;
	cout<<"Size::",cin>>n;
	int arr[n];
	cout<<"enter randoms 0 and 1::";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<"segregated array::";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
