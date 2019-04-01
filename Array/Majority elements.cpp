//using Moore's Algorithm..

#include<bits/stdc++.h>

using namespace std;

int find_candidate(int *arr,int size){
	int maj_index=0;
	int count=1;
	
	for(int i=1;i<size;i++)
	{
		if(arr[i]==arr[maj_index])
			count++;
		else
			count--;
		//cout<<"\t"<<count;
		if (count==0)
			{
				maj_index=i;
				count=1;
			}
	}
	return arr[maj_index];
}
main()
{
	int size;
	cout<<"Size of Array:";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Majority element is"<<find_candidate(arr,size);
}
