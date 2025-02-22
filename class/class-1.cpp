#include <iostream>
using namespace std;
class Student{
public:
	// Property / Attribute / Field
	string name;
	int score;
	

	// Constructor
	Student(){

	}

	Student(string name, int score){
		this->name = name;
		this->score = score;
	}


	// Method / Function
	char getGrade(){
		if(score >= 80) return 'A';
		else if(score >= 70) return 'B';
		else return 'F';
	}

	void showInfo(){
		cout << name << " " << score << " " << getGrade() << endl;
	}
};

int main(){
	Student s1;
	s1.score = 87;
	s1.name = "Thanaphon";

	cout << s1.name << " " << s1.score << " " << s1.getGrade() << endl;

	Student s2;
	cin >> s2.name >> s2.score;
	cout << s2.name << " " << s2.score << endl;


	s1.showInfo();
	s2.showInfo();


	Student s3 = Student("Mongkol", 98);
	s3.showInfo();

	return 0;
}