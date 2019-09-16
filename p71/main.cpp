#include <iostream>
#include <vector>
using namespace std;

vector<string> permutations(string s, int left, int right) {
	vector<string> result;
	vector<string> intermediate;
	if (left == right) {
		result.push_back(s);
	}
	else {
		for (int i=left; i <= right; i++) {
			swap(s[left],s[i]);
			intermediate = permutations(s, left +1, right);
			result.insert(result.end(), intermediate.begin(), intermediate.end());
			swap(s[left],s[i]);
		}
	}
	return result;
}

int main(){
	string s = "abcdef";
	int n = s.size();
	vector<string> result;
	result = permutations(s, 0, n-1);
	
	for(int i=0; i< result.size(); i++){
		cout<<result[i]<<endl;
	}
	return 0;
}
