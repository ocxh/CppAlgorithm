#include<bits/stdc++.h>
using namespace std;
int a[10]; //배열 초기화 방법1 

int main(){
	for(int i=1; i<=10; i++) a[i-1] = i;
	for(int i:a) cout<<i<<" ";
	cout<<"\n";
	
	auto t=find(a, a+10, 100);
	if(t==a+10) cout<<"not found"<<"\n";
	
	fill(a, a+10, 10);
	for(int i:a) cout<<i<<" ";
	cout<<"\n";
	
	return 0;
} 
