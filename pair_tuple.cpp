#include<bits/stdc++.h>
using namespace std;

pair<int, int> pi;
tuple<int, int, int> ti;
int a, b, c;

int main()
{
	//pair example
	pi = {1, 2}; //make pair1
	tie(a,b) = pi; //get pair1
	cout<<a<<" : "<<b<<"\n";
	
	pi = make_pair(1,2); //make pair2
	//get pair2
	a = pi.first;
	b = pi.second;
	cout<<a<<" : "<<b<<"\n";
	
	
	ti = make_tuple(1,2,3); //make tuple
	//get tuple1
	tie(a,b,c) = ti;
	cout<<a<<" : "<<b<<" : "<<c<<"\n";
	//get tuple2
	a = get<0>(ti);
	b = get<1>(ti);
	c = get<2>(ti);
	cout<<a<<" : "<<b<<" : "<<c<<"\n";
	
	return 0;
}
