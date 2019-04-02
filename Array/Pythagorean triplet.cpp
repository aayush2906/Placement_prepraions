#include<bits/stdc++.h>
using namespace std;

int triplet(int *arr,int n)
{
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		arr[i]=arr[i]*arr[i];
	}
	
	for(int i=n-1;i>=2;i--)
	{
		int l=0;
		int r=i-1;
		while(l<r)
		{
			if(arr[l]+arr[r]==arr[i])
			{
				cout<<"Pythogoran trplets are:"<<sqrt(arr[l])<<"\t"<<sqrt(arr[r])<<"\t"<<sqrt(arr[i]);
				return 1;
			}
		
			else
			(arr[l]+arr[r]<arr[i])?l++:r--;
		}
	}

return false;	
	
}
main()
{
	int n;
	cout<<"Size",cin>>n;
	int arr[n];
	cout<<"Elements::";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	triplet(arr,n);
}
