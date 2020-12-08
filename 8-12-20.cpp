#include<bits/stdc++.h>
using namespace std;
struct info{
	int no;
	struct info *next;
};

int compare1(struct info *startA, struct info *startB) {
	struct info *ptr,*ptr1;
	ptr = new info;
	ptr1 = new info;
	ptr1 = startA->next;
	while(ptr1->next != NULL) {
		ptr = startB->next;
		while(ptr->next != NULL) {
			if(ptr1->no == ptr->no) {
				return ptr1->no;
			}
			else
			{
				ptr = ptr->next;
			}
		}
		ptr1 = ptr1->next;
	}
	return 1;

}

struct info * create(int s)
{
	int i=0;
	struct info *ptr,*start;
	ptr = new info;
	start =new info;
	start->next= ptr;
	while(i<s)
	{
		cin>>ptr->no;
	//	cout<<ptr->no<<"\n";
		ptr->next = new info;
		ptr = ptr->next;
		i++;
	}
	ptr->next = NULL;
	return start;
}
int main()
{
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		int s;
		struct info *startA;
		cin>>s;
		startA = create(s);
		struct info *startB;
		cin>>s;
		startB = create(s);
		int r = compare1(startA, startB);
		if(r==1)
		{
			cout<<"no";
		}
		else
		{
			cout<<r;
		}
}
