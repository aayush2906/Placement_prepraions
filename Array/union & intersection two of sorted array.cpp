#include<bits/stdc++.h>
using namespace std;


void  printUnion(int *arr1,int *arr2,int m,int n)
{
	int i=0,j=0;
	cout<<"union::";
	while(i<m && j<n)
	{
		if(arr1[i]<arr2[j])
			{
			cout<<arr1[i];
			i++;
			}
		else if(arr1[i]>arr2[j])
		 {
			 	cout<<arr2[j];
		 	j++;
			}
			else
				{
					cout<<arr1[i];
					i++,j++;
				}
			
	}
		//printing remaining elements
		
		while(i<m)
		cout<<arr1[i++]<<" ";
		while(j<n)
		cout<<arr2[j++]<<" ";
	
	
}

void  printIntersection(int *arr1,int *arr2,int m,int n)
{
	int i=0,j=0;
	cout<<"\nIntersection::";
	while(i<m&&j<n)
	{
			if(arr1[i]<arr2[j])
			{
			i++;
			}
		else if(arr1[i]>arr2[j])
			{
		 	j++;
			}
			else
				{
					cout<<arr1[i];
					i++,j++;
				}
			
	}
}
int main()
{
	int n,m;
	cout<<"size of \narray 1:",cin>>m,cout<<"array 2:",cin>>n;
	
	int arr1[m];
	int arr2[n];
	cout<<"Elements of 1st array";
	for(int i=0;i<m;i++)
		cin>>arr1[i];
	cout<<"Elements of 2nd array";
	for(int j=0;j<n;j++)
		cin>>arr2[j];
	
	
	printUnion(arr1,arr2,m,n);
	printIntersection(arr1,arr2, m, n);
	
}
