#include <bits/stdc++.h>
using namespace std;
 const unsigned int M = 1000000007;
int main() {
	// your code goes here
	int n,m,i,c=0,j;
	cin>>n>>m;
	   for(i=1;i<=n;i++){
	       if(i%2==0)
	           c++;
	       for(j=1;j<=m;j++){
	         if(i%2!=0)
	         cout<<"#";
	         else if(c%2!=0 && j==m)
	         cout<<"#";
	         else if(c%2==0 && j==1)
	         cout<<"#";
	         else
	         cout<<".";
	       }
	       cout<<endl;
	   }
	return 0;
}
