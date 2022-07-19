#include <bits/stdc++.h>
using namespace std;
 const unsigned int M = 1000000007;
int main() {
	// your code goes here
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
	    if(i==0 && s[i]=='9'){
	        cout<<"9";
	        continue;}
	     if(s[i]>='5')
	      s[i]='9'-s[i]+'0';
	    cout<<s[i];
	}
	return 0;
}
