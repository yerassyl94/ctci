#include <iostream>
#include <map>

using namespace std;

bool isPalindrome(string s){
	map<char, int> charMap;
	bool isCenterExist = false;
	bool result;
	
	for (int i = 0; i < s.length(); i++){
		if (s[i] != ' '){
			charMap[s[i]]++;
		}
	}

	for (auto const& x: charMap){
		if (x.second % 2 == 1){
			if (isCenterExist){
				return false;
			}else {
				isCenterExist = true;
			}
		}
	}

	return true;
}

int main(){
	bool res = isPalindrome("tact coa");
	bool res1 = isPalindrome("aaaabbbccddd");
	cout<<"result:"<<res<<endl;
	cout<<"result:"<<res1<<endl;
	return 0;
}
