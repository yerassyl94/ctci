#include <iostream>
using namespace std;

void isUnique(string s){
	int checker = 0;
	for (int i =0; i < s.length(); i++){
		int bitAtIndex = s[i] - 'a';
		
		if ((checker & (1 << bitAtIndex)) > 0){
			cout<<"not unique"<<endl;
			return;
		}

		checker = checker | (1 << bitAtIndex);
	}

	cout<<"unique"<<endl;
}

int main(){
	isUnique("abcde");
	isUnique("abab");

	return 0;
}
