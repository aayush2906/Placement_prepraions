#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<int(b);i++)

using namespace std;

void leader(int *arr,int n)
{
	int max,t=0;
	for(int i=n-1;i>=0;i--)
		{
			if(arr[i]>arr[i-1])
				t=arr[i];
			else 
				t=arr[i-1];
			
			if(t>max)
			{
				max=t;
				cout<<max<<" ";	
			}	
		}
}

int main()
{
	int n;
	cout<<"Size:",cin>>n;
	int arr[n];
	f(i,0,n)
	{
		cin>>arr[i];
	}
	
	leader(arr,n);
	
}
