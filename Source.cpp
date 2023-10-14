#include <iostream>
#include <string>
using namespace std;

int main() {

	string name;
	float homeworkScore, testScore, quizScore, attendanceScore;
	int totalScore;

	cout << "Please enter the student's name >>> ";
	cin >> name;
	cout << endl;
	cout << "Please enter the homework score >>> ";
	cin >> homeworkScore;
	cout << endl;
	cout << "Please enter the test score >>> ";
	cin >> testScore;
	cout << endl;
	cout << "Please enter the quiz score >>> ";
	cin >> quizScore;
	cout << endl;
	cout << "Please enter the attendance score >>> ";
	cin >> attendanceScore;
	cout << endl;
	cout << "Grades for " << name << endl;
	cout << "  Homework	: " << homeworkScore << endl;
	cout << "  Test		: " << testScore << endl;
	cout << "  Quiz		: " << quizScore << endl;
	cout << "  Attendance	: " << attendanceScore << endl;
	cout << "============================" << endl;
	totalScore = (homeworkScore * 0.2) + (testScore * 0.5) + (quizScore * 0.2) + (attendanceScore * 0.1);
	cout << " Total Score	: " << totalScore << endl;

	return 0;
}
