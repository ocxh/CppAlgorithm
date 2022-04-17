#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> v(10, vector<int>(10, 0));

int main(){
	
	fill(&v[0][0], &v[0][0] + 10*10, 1); 
	
	cout<<v[9][9];
	
	return 0;
} 
