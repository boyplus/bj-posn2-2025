#include <iostream>
using namespace std;
int n;
int arr[20];
bool check[20];
void rec(int index){
	if(index == n){
		for(int i=0;i<n;i++){
			if(check[i] == true){
				cout << arr[i] << " ";
			}
		}
		cout << endl;
	} else {
		check[index] = true;
		rec(index+1);
		check[index] = false;


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