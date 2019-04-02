#include<bits/stdc++.h>

using namespace std;
int check(int *arr,int n,int x)
{
	priority_queue<int>q;
	set<int>s;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]>x)
			s.insert(arr[i]);
		else 
			if(arr[i]<x)
				q.push(arr[i]);
				else if(arr[i]==x)
				{
					q.push(x);
					s.insert(x);
				}
	}
	if(q.size()!=0)
		{
		
		cout<<"Floor:"<<q.top()<<endl;
		
	}
	else 
	cout<<"Floor doesn't exist\n";
	if(s.size()!=0)
	{
		set<int>::iterator it=s.begin();
			cout<<"ceil:"<<*it<<endl;
		
	}
	else 
	cout<<"ceil doesn't exist\n";
return 0;	
}

main()
{
	int arr[]={1,2,7,8,10,12,19};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x;
	cin>>x;
	check(arr,n,x);
	
}
