#include<bits/stdc++.h>

using namespace std;
int getOddCount(int *arr, int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		res=res^arr[i];
	}
	return res;
}
main()
{
	int size;
	cout<<"Size",cin>>size;
	int arr[size];
	cout<<"Enter elements:";
	for(int i=0;i<size;i++)
		cin>>arr[i];
	cout<<"number occuring odd time is:"<<getOddCount(arr,size);
}
