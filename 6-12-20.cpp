#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		int i,t,n,k,j,l,c=0,y;
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
			for(j=0;j<n;j++)
			{
				y=a[j];
				if(j+k>n)
				{
					break;
				}
				for(l=j;l<n;l++)
				{
					if(c<k)
					{
						if(a[l]>=y)
						{
							y=a[l];
						}

					}
					else
					{
						break;
					}
					c++;
				}
				c=0;
				cout<<y<<"\n";
				y=0;
			}


		}
}