#include <iostream>
#include <vector>
using namespace std;
int n;
int arr[20];
vector<int> vec;
void rec(int index){
	if(index == n){
		for(int x:vec){
			cout << x << " ";
		}
	} else {
		// ใส่ arr[index] ลงใน subset
		vec.push_back(arr[index]);
		rec(index+1);
		vec.pop_back();


		// ไม่ใส่ arr[index] ลงใน subset
		rec(index+1);
	}
}
int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	rec(0);

	return 0;
}