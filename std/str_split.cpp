#include <bits/stdc++.h>
using namespace std;
vector<string> split(string input, string delimiter) {
	vector<string> ret;
	long long pos = 0;
	string token = "";
	while ((pos = input.find(delimiter)) != string::npos) { //���� ���ڸ� ã������  
		token = input.substr(0, pos); //�Է� ���ڿ����� ã�� ��ġ���� �ڸ� �� 
		ret.push_back(token); //ret�� �� �ڿ� Ǫ�� 
		input.erase(0, pos + delimiter.length()); //�Է� ���ڿ����� �ش� �κ� ����� 
	}
	ret.push_back(input); //���� �Է� ���ڿ� ret�� �� �ڿ� Ǫ�� 
	return ret;
}
int main(){
string s = "���ع��� ��λ��� ������ �⵵��";
string d = " ";
vector<string> a = split(s, d);
for(string b : a) cout << b << "\n";\ 
}

