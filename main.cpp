#include <iostream>

using namespace std;


void myFirstLabScript() {
	string name;
	string stdID;

	cout << "What is yout name ? " << endl;

	cin >> name;

	cout << "Hello " << name << endl;

	cout << "What is your student id " << name << endl;

	cin >> stdID;

	cout << "Your id is " << stdID << endl;

}


void lab1_task2() {
	int var1, var2, sum, diff, prod;

	cout << "Please enter your first value..." << endl;
	cin >> var1;
	cout << "Please enter your second value..." << endl;
	cin >> var2;

	sum = var1 + var2;
	diff = var1 - var2;
	prod = var1 * var2;




	cout << "Var1:" << var1 <<endl;
	cout << "Var2:" << var2 << endl;
	cout << "Sum:" << sum << endl;
	cout << "Diff:" << diff << endl;
	cout << "Prod:" << prod << endl;

}



void lab1_task3(){

	string name;
	cout << "Please enter your name" << endl;
	cin >> name;

	int lab_grade, midterm_grade, final_grade;
	double last_score;

	cout << "Please enter your lab grade" << endl;
	cin >> lab_grade;
	cout << "Please enter your midterm grade" << endl;
	cin >> midterm_grade;
	cout << "Please enter your final grade" << endl;
	cin >> final_grade;


	last_score = (lab_grade*0.25) + (midterm_grade*0.35) + (final_grade*0.4);

	cout << "Name: " << name << endl;
	cout << "Lab: " << lab_grade << endl;
	cout << "Midterm: " << midterm_grade << endl;
	cout << "Final: " << final_grade << endl;
	cout << "Last Score: " << last_score << endl;




}


void lab1_task4() {

	cout << "*" << endl;
	cout << "**" << endl;
	cout << "***" << endl;
	cout << "**" << endl;
	cout << "*" << endl;

}


int main() {

	myFirstLabScript();

	lab1_task2();

	lab1_task3();

	lab1_task4();


	return 0;
}



