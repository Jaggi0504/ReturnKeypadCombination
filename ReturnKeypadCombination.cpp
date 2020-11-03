#include<bits/stdc++.h>
using namespace std;

string global[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int keypad(int n, string *output) {
	if(n == 0 || n == 1) {
		output[0] = "";
		return 1;
	}
	string smallOutput[1000];
	int k = 0;
	int ans = keypad(n/10, smallOutput);
	string value = global[n%10];
	for(int i=0;i<ans;i++) {
		for(int j=0;j<value.size();j++) {
			output[k] = smallOutput[i] + value[j];
			k++;
		}
	}
	return k;
}

int main() {
	int n;
	cin>>n;
	string output[1000];
	int ans = keypad(n, output);
	for(int i=0;i<ans;i++) {
		cout<<output[i]<<endl;
	}
	return 0;
}
