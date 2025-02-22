#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	// Bonus: these 2 lines is to make sure that cin/cout is fast
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	cout << "Hello World" << endl;


	int x = 13, y = 20;
	cout << x << " " << y << endl;
	int sum = x + y;
	cout << "sum = " << sum << endl;



	float PI = 3.141159265;
	cout << fixed << setprecision(2) << PI << endl;



	int a, b;
	cin >> a >> b;
	cout << a + b << endl;


	return 0;
}