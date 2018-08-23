// write a c++ programme to enter length in centimeter and convert it into meter and kilometer
// including library
#include <iostream>
// write the main function
using namespace std;
int main() {
	float cent, met, km; // declaring variables
	cout << "What is the length of the wire in cm?" <<endl;
	cin >> cent;//read the value
	cout << "The length of the wire is "<< cent<< " cm"<<endl;
	met = (cent/100);//assigning conversions from centimeter to meter 
	km = (met/1000);//assigning conversions from centimeter to kilometer
	cout <<"The length of the wite is "<<met<<" m"<<endl;
	cout <<"The length of the wite is "<<km<<" m"<<endl;	
	return 0;
}
