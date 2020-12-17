#include<bits/stdc++.h>
using namespace std;
string encoding(string s){
	string word,final;
	int i,k=0;
	for(i=0;i<s.length();i++){
		if(s[i]==s[i+1] ){
			k++;
			continue;
		}
		else{
			k++;
			word = to_string(k);
			final = final + word + s[i];
			word = "";
			k=0;
		}
	}
	return final;
}
int main()
{
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		string s,final;
		cin>>s;
		final = encoding(s);		
		cout<<final<<endl;
	return 0;
}
