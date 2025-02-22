#include <iostream>
using namespace std;

int main(){
	// string
	string message = "Hello World";
	cout << "Length of " << message << " is " << message.length() << endl;

	// use cin for input that has no white space
	string firstName;
	cin >> firstName;
	cout << firstName << endl;

	// temp is to flush \n
	string temp;
	getline(cin, temp);


	// use getline for input that contains white space
	string fullName;
	getline(cin, fullName);
	cout << fullName << endl;

	return 0;
}