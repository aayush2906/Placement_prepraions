//fixed points are those index whose value equals its element
#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<int(b);i++)

using namespace std;

int fixedPoint(int *arr,int n)
{
	int t=-1;
	f(i,0,n)
	{
		if(arr[i]==i)
		{
			cout<<"fixed Point"<<i;
			return 0;
		}
	}
	if(t=-1)
	cout<<"no fixed element";
return 0;
}

main()
{
	int n;
	cout<<"Size",cin>>n;
	int arr[n];
	
	cout<<"elements";
	f(i,0,n)
	cin>>arr[i];
	
 	fixedPoint(arr,n);
 	
 } 
