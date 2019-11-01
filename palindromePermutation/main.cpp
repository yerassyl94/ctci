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
		if (x.second == 1){
			if (isCenterExist){
				result=false;
				break;
			}else {
				isCenterExist = true;
			}
		}
		else if(x.second % 2 == 1){
			result = false;
			break;
		}
		else {
			result = true;
		}
	}

	return result;
}

int main(){
	bool res = isPalindrome("tact coa");
	cout<<"result:"<<res<<endl;
	return 0;
}
