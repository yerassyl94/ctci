#include <iostream>
#include <algorithm>

using namespace std;

string urlify(string s){
	int count = 0;
	for (int i = 0; i < s.length(); i++){
		if (s[i] == ' '){
			count++;
		}
	}

	int size = s.length() + 2 * count;
	int index = s.length() -1;
	for (int i = index; i >= 0; i--){
		if (s[i] == ' '){
			s.insert(size-1, "0");
			s.insert(size-2, "2");
			s.insert(size-3, "%");
			size = size - 3;
		} else {
			s.insert(size-1, "a");
			size--;
		}
	}

	return s;
}

int main(){
	string s = "how to create query";

	string res = urlify(s);
	cout<<"result: "<<res<<endl;
	return 0;
}
