#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int b[5];

int main(){
	for(int i=5; i>=1; i--) b[i-1] = i; //1 2 3 4 5
	for(int i=5; i>=1; i--) a.push_back(i); //5 4 3 2 1
	
	//�������� ����(�⺻) 
	sort(b, b+5);
	sort(a.begin(), a.end());
	for(int i:b) cout<< i << ' ';
	cout << '\n';
	for(int i:a) cout << i << ' ';
	cout<< '\n';
	
	//�������� ����(less<int>()) 
	sort(b, b+5, less<int>());
	sort(a.begin(), a.end(), less<int>());
	for(int i:b) cout<< i << ' ';
	cout << '\n';
	for(int i:a) cout << i << ' ';
	cout<< '\n';
	
	//�������� ����(greater<int>()) 
	sort(b, b+5, greater<int>());
	sort(a.begin(), a.end(), greater<int>());
	for(int i:b) cout<< i << ' ';
	cout << '\n';
	for(int i:a) cout << i << ' ';
	cout<< '\n';	
	
}
