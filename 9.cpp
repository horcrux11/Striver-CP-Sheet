#include <bits/stdc++.h>
using namespace std;
 const unsigned int M = 1000000007;
int main() {
    int i,n,j,k,min=INT_MAX,max=INT_MIN,s=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(min>=a[i])
        {
        j=i;min=a[i];
        }
        if(max<a[i]){
        k=i;max=a[i];
        }
    }
    if(j<k)
    s=k+n-j-2;
    if(j>k)
    s=k+n-j-1;
    cout<<s;
	return 0;
}
