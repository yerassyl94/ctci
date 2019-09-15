#include <iostream>
using namespace std;

vector<string> permutations(string s) {
	
}

int main(){
	string s = "abcdefg";
	vector<string> result;
	result = permutations(s);

	for (int i=0; i< result.size(); i++){
		cout<<result[i]<<endl;
	}
	
	return 0;
}
