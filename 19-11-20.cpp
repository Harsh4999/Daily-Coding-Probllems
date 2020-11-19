// Good morning! Here's your coding interview problem for today.

// This problem was recently asked by Google.

// Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

// For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

// Bonus: Can you do this in one pass?

#include<bits/stdc++.h>
using namespace std;
void sum(int a[], int n, int k)
{
	int	j=0,l=n-1,z=0;
			while(true)
			{
				z=a[j]+a[l];
				if(z>k)
				{
					l--;
					continue;
				}
				else if(z<k)
				{
					j++;
					continue;
				}
				else if(z==k)
				{
					cout<<a[j]<<" "<<a[l]<<"\n";
					return;
				}
			}
}
int main()
{
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		int i,t,n,j,z=0,l,k;
		cin>>t;
		for(i=0;i<t;i++)
		{
			cin>>n;
			cin>>k;
			int *a = new int[n];
			for(j=0;j<n;j++)
			{
				cin>>a[j];
			}
			sum(a,n,k);
		}		
}