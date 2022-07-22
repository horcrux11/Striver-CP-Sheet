#include <bits/stdc++.h>
using namespace std;
 const unsigned int M = 1000000007;
int main() {
	// your code goes here
	 int n,i,s=0;
	 cin>>n;
	 unordered_map<string,int>v;
	 for(i=0;i<n;i++){
	     string b;
	     cin>>b;
	     v[b]++;
	 }
	 int a[5];
	 a[0]=4;a[1]=6;
	a[2]= 8;
	 a[3]=12;
	 a[4]=20;
	 for(auto &m:v){
	     if(m.first=="Tetrahedron")
	     s=s+4*m.second;
	     if(m.first=="Cube")
	     s=s+6*m.second;
	     if(m.first=="Octahedron")
	     s=s+8*m.second;
	     if(m.first=="Dodecahedron")
	     s=s+12*m.second;
	     if(m.first=="Icosahedron")
	     s=s+20*m.second;
	 }
	 cout<<s;
	return 0;
}
