#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> vec = {-1, 5, 8, -3, 5};

	cout << "size is " << vec.size() << endl;

	cout << "Accessing each element in vector by using for loop and index" << endl;
	for(int i=0;i<vec.size();i++){
		cout << vec[i] << " ";
	}
	cout << endl;

	return 0;
}