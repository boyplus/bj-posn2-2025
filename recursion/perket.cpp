#include <iostream>
using namespace std;
int n;
int S[10], B[10];
int mn = 1000000000;
int rec(int index, int s, int b, bool isChossen){
	if(index == n){
		if(isChossen == false) return 1000000000;

		int diff = s - b;
		if(diff < 0) diff *= -1;
		if(diff < mn) mn = diff;
		return diff;
	} else {
		int left = rec(index+1, s*S[index], b+B[index], true);
		int right = rec(index+1, s, b, isChossen);
		if(left < right) return left;
		return right;
	}
}
int main(){
	cin >> n;
	for(int i=0; i < n; i++){
		cin >> S[i] >> B[i];
	}

	rec(0, 1, 0, false);
	cout << mn << endl;


	return 0;
}