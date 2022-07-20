#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    vector <int >v;
	    int n,d,c=0;cin>>n;
	    int m=n;
	    while(n!=0){
	        d=n%10;
	        c++;
	           if(n % 10 != 0) {
                v.push_back((n % 10) * pow(10, c - 1));
            }
	        n=n/10;
	    }
	    cout<<v.size()<<endl;
	    for(auto it : v)
	    cout<<it<<" ";
	    cout<<endl;
	}
	return 0;
}
