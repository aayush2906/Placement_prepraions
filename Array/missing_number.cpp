#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<int(b);i++)
using namespace std;

void missing_number(int *arr,int n,int ini ,int t)
{
	int sum=0,sum1=0;
	f(i,ini,t+1)
	{
		sum+=i;
		
	}
	f(i,0,n)
	{
		sum1+=arr[i];
		
	}
	cout<<"Missing number"<<sum-sum1;
	
	
}


	int main()
{
	int n;
	cout<<"Size of Array:";
	cin>>n;
	int arr[n];
	cout<<"Enter no. in range";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int ini=arr[0];
	int t=arr[n-1];
	missing_number(arr,n,ini,t);
	return 0;
	
	
}
