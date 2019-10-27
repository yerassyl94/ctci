#include <iostream>
#include <set>
using namespace std;

void isUnique(string s){
	set<char> charSet;
	
	for (int i = 0; i < s.length(); i++){
		charSet.insert(s[i]);
	}
	
	s.length() == charSet.size() ? cout<<"unique"<<endl : cout<<"not unique"<<endl;
}

int main(){
	isUnique("abcde");
	isUnique("abab");

	return 0;
}
