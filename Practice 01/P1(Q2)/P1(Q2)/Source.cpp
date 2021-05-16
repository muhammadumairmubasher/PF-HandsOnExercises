#include<iostream>
using namespace std;
int main()
{
	int student1Marks, student2Marks, student3Marks, student4Marks,student5Marks,avg;
	cout << "Enter the marks of 5 student:\t";
	cin >> student1Marks >> student2Marks >> student3Marks >> student4Marks >> student5Marks;
	avg = (student1Marks + student2Marks + student3Marks + student4Marks + student5Marks) / 5;
	cout << "\nAverage marks of five student:\t" << avg;
	return 0;
}