#include <bits/stdc++.h>
using namespace std;

string palindrome(string s){
	return s.length() <= 1 ? "Adalah palindrom" : (s[0] == s[s.length()-1] ? palindrome(s.substr(1, s.length() - 2)) : "Bukan palindrom");
}
string str;
int main(){
	cout << "Masukkan kata: "; cin >> str;
	cout << palindrome(str);
	return 0;
}