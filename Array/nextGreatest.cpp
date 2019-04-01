//Replace every element with the greatest element on right side
#include<bits/stdc++.h>

using namespace std;
void nextGreatest(int *arr,int n)

	{
		int temp;
		int max_from_right=arr[n-1];
		arr[n-1]=-1;
		for(int i=n-2;i>=0;i--)
		{
			temp=arr[i];
			
			arr[i]=max_from_right;
			
			if(max_from_right<temp)
			{
				max_from_right=temp;
			}
		}
			}
main()
{
	int n;
	cout<<"size";
	cin>>n;
	int arr[n];
	cout<<"elements::";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	nextGreatest(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
}

