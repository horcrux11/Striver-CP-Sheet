#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y,z,a[3];
	cin>>x>>y>>z;
	a[0]=x;a[1]=y;a[2]=z;
	sort(a,a+3);
	int d= abs(a[1]-a[0])+abs(a[2]-a[1]);
	cout<<d;
	return 0;
}
