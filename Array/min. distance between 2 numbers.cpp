#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<int(b);i++) 

using namespace std;

void min_distance(int *arr,int n,int x,int y)
{
	int x1,y1,t=100;
	f(i,0,n)

	{
		if(arr[i]==x)
			 x1=i;
		if(arr[i]==y)
				y1=i;

		if(y1-x1<t)
			t=y1-x1;
		}
		if(t<0)
		{
			t=t*-1;
		}
		
	cout<<"minimum distance is:"<<t;
	
}

int main(){
	int n,x,y;
	cout<<"size:",cin>>n;
	cout<<"1st number:",cin>>x;
	cout<<"2nd number:",cin>>y;
	int arr[n];
	f(i,0,n)
	cin>>arr[i];
	min_distance(arr,n,x,y);
	return 0;
	
}
