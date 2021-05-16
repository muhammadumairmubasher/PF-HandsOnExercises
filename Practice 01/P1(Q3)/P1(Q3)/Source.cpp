#include<iostream>
using namespace std;
int main()
{
	double radius;
	cout << "Enter the radius of circle:\t";
	cin >> radius;
	double const pi = 3.1415;
	cout << "\nArea of circle:\t" << pi * radius*radius;
	return 0;
}