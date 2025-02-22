#include <iostream>
#include <vector>
using namespace std;
int n;
int arr[10];
bool check[10];
vector<int> vec;
void rec(){
	if(vec.size() == n){
		for(int x:vec) cout << x << " ";
		cout << endl;
	} else {
		for(int i=0;i<n;i++){
			if(check[i] == true) continue;

			check[i] = true;
			vec.push_back(arr[i]);
			rec();
			check[i] = false;


			vec.pop_back();
		}
	}
}
int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	rec();

	return 0;
}