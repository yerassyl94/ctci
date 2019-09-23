#include <iostream>
#include <vector>

using namespace std;

vector<int> common(vector<int> a, vector<int>b){
	vector<int> res;

	int i=0, j=0;

	while( i< a.size() && j < b.size()) {
		if(a[i] == b[j]){
			res.push_back(a[i]);
			i++;
			j++;
		}
		else if(a[i] < b[j]) {
			i++;
		}
		else
			j++;
	}

	return res;
}

int main() {
	vector<int> a{13,27,35,40,49,55,59};
	vector<int> b{17,35,39,40,55,58,60};

	vector<int> res;
	res = common(a,b);

	for (int i = 0; i < res.size(); ++i)
	{
		cout<<res[i]<<endl;
	}

	return 0;
}