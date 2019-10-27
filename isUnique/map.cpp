#include <iostream>
#include <map>

using namespace std;

void isUnique(string s){
	map<char, int> charMap;
	
	for(int i=0; i< s.length(); i++){
		charMap[s[i]]++;
	}

	for(int i=0; i< s.length(); i++){
		if(charMap[s[i]] > 1){
			cout<<"not unique"<<endl;
			return;
		}
	}
	cout<<"chars are unique"<<endl;
}

int main(){
	isUnique("abcde");
	isUnique("abab");
	return 0;
}
