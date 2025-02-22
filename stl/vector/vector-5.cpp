#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class Student{
public:
	string name;
	int score;

	Student(string name, int score){
		this->name = name;
		this->score = score;
	}
};
bool cmp(Student& left, Student& right){
	return left.score < right.score;
}
int main(){
	vector<Student> vec;

	vec.push_back(Student("boy", 12));
	vec.push_back(Student("james", 30));
	vec.push_back(Student("reiw", 8));
	vec.push_back(Student("non", 10));

	sort(vec.begin(), vec.end(), cmp);
	for(auto& s:vec){
		cout << s.name << " " << s.score << endl;
	}
	return 0;
}