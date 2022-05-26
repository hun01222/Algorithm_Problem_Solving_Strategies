//combination nCm

#include<iostream>
#include<vector>
using namespace std;

void pick(int n, vector<int>& picked, int toPick){
	if(!toPick){
		for(auto a:picked)
			cout << a << ' ';
		cout << "\n";
		return;
	}
	int smallest=picked.empty() ? 0 : picked.back()+1;
	for(int next=smallest; next<n; next++){
		picked.push_back(next);
		pick(n, picked, toPick-1);
		picked.pop_back();
	}
}

int main(){
	int n, m;
	vector<int> v;
	cin >> n >> m;
	
	pick(n, v, m);
}