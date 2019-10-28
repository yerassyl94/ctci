#include <iostream>
#include <map>

using namespace std;

bool isPermutation(string s1, string s2){
	if (s1.length() != s2.length()){
		return false;
	}
	
	map<char,int> store;

	for (int i = 0; i < s1.length(); i++) {
		store[s1[i]]++;
	}


	for (int i=0; i < s2.length(); i++){
		if (store.count(s2[i]) && store[s2[i]] != 0){
			store[s2[i]]--;
		} else {
			return false;
		}
	}

	return true;
}

int main(){
	cout<<isPermutation("abcdee", "edecab")<<endl;
	cout<<isPermutation("abeeee", "eeecae")<<endl;
	return 0;
}
