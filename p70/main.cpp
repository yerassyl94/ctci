#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<string> permutations(string s, string b){
	int s_length = s.length();
	int b_length = b.length();

	unordered_multiset<char> small;
	unordered_multiset<char> big;
	vector<string> result;

	for (int i=0; i < s_length;i++){
		small.insert(s[i]);
	} 
	for (int i=0; i < b_length;i++){
		if (i < s_length)
			big.insert(b[i]);
		else {
			if (big == small){
				result.push_back(b.substr(i-s_length,s_length));
			}
			auto itr = big.find(b[i-s_length]);
			if (itr != big.end())
				big.erase(itr);

			big.insert(b[i]);
		}
	}

	if (big == small) {
		result.push_back(b.substr(b_length - s_length, s_length));
	}

	return result;
}

int main(){
	string s = "abbc";
	string b = "cbabadcbbabbcbabaabccbabc";
	vector<string> result; 
	result = permutations(s,b);

	for(int i=0; i < result.size(); i++) {
		cout<<result[i]<<endl;
	}

	return 0;
}
