//Kyle Brandimarte
//This is my own work
//In class exercise 1/8/2020
#include <iostream>
#include <cmath>
using namespace std;
int main() {
 double lb, kg;
	cout << "Weight in pounds: ";
	cin >> lb;
	kg = lb * 0.454;
	cout << "Weight in kilograms: " << kg ;

	double s, area;
	cout << "\nlength: ";
	cin >> s;
		area = ((3 *sqrt(3)) / 2) * s * s;
	cout << "Answer: " << area <<endl ;
	system("pause");





	return 0;
}