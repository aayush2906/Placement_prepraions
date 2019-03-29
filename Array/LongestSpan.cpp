#include<bits/stdc++.h>
using namespace std;

int longestCommonSum(bool arr1[],bool arr2[],int n)
{
int diff[2*n+1];
int sum1=0,sum2=0;
int index=0;
int maxlen=0;

memset(diff,-1,sizeof(diff));

	for(int i=0;i<n;i++)
	{
		sum1+=arr1[i];
		sum2+=arr2[i];
		
		int curr_diff=sum1-sum2;
		index=n+curr_diff;
		if(curr_diff==0)
			maxlen=i+1;
		else
			if(diff[index]==-1)
			{
				diff[index]=i;
			}
			else{
				int len=i-diff[index];
				if(len>maxlen)
					maxlen=len;
			}
	}
	return maxlen;
}

int main()
{
	bool arr1[]={0,1,0,1,1,1,1};
	bool arr2[]={1,1,1,1,1,0,1};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	cout<<"Longest Span with same sum is of length:"<<longestCommonSum(arr1,arr2,n);
}
