#include<bits/stdc++.h>
using namespace std;
vector<int> v;

int main(){
	for(int i=1; i<=10; i++) v.push_back(i); //�ڿ� ���� �߰�push_back()
	for(int a: v) cout<<a<<" ";
	cout<<"\n";
	v.pop_back(); //�ڿ� ���� ����(pop_back()) 
	
	for(int a: v) cout<<a<<" ";
	cout<<"\n";
	
	v.erase(v.begin(), v.begin() + 1); //�� �����.eraser()
	
	for(int a: v) cout<<a<<" ";
	cout<<"\n";
	
	auto a = find(v.begin(), v.end(), 100); //�� ã�� find() 
	if(a==v.end()) cout<<"not found" <<"\n";
	
	fill(v.begin(), v.end(), 10);
	
	for(int a: v) cout<<a<<" ";
	cout<<"\n";
	v.clear(); //�迭 �ʱ�ȭ clear() 
	cout<<"�ƹ��� ������?\n";
	for(int a:v) cout<<a<<" ";
	cout<<"\n";
	
	return 0;
}
