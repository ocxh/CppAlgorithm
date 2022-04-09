#include <bits/stdc++.h>
using namespace std;
vector<string> split(string input, string delimiter) {
	vector<string> ret;
	long long pos = 0;
	string token = "";
	while ((pos = input.find(delimiter)) != string::npos) { //구분 문자를 찾았으면  
		token = input.substr(0, pos); //입력 문자열에서 찾은 위치까지 자른 후 
		ret.push_back(token); //ret의 맨 뒤에 푸쉬 
		input.erase(0, pos + delimiter.length()); //입력 문자열에서 해당 부분 지우기 
	}
	ret.push_back(input); //남은 입력 문자열 ret의 맨 뒤에 푸쉬 
	return ret;
}
int main(){
string s = "동해물과 백두산이 마르고 닳도록";
string d = " ";
vector<string> a = split(s, d);
for(string b : a) cout << b << "\n";\ 
}

