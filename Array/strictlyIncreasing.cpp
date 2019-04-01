//count strictly increasing sub-arrays
#include<bits/stdc++.h>
using namespace std;

int countIncreasing(int arr[],int n)
{
	int cnt=0;
	int len=1;

	
	for(int i=0;i<n-1;++i)
	{
		if(arr[i+1]>arr[i])
		{
			len++;
		}
		else 
		{
			
			cnt+=(((len-1)*len)/2);
			len=1;
		}
	}
	if(len>1)
	cnt+=(((len-1)*len)/2);
	
	return cnt;
}

main()
{
	int n;
	cout<<"Size",cin>>n;
	int arr[n];
	cout<<"Elements::";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Number of strictlyincreasing sub-arrays are::"<<countIncreasing(arr,n);
}
