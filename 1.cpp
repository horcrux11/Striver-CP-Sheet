#include <bits/stdc++.h>
using namespace std;
 const unsigned int M = 1000000007;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],i;
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int k=1;
	    for(i=1;i<n;i++)
	    {
	        if(a[i]%a[0]!=0)
	        //cout<<a[0]<<" "<<a[i];
	        k=0;
	    }
	    if(k==0)
	    cout<<"NO";
	    else cout<<"YES";
	     cout<<endl;
	

	}
	return 0;
}
