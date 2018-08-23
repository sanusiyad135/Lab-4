// write a c++ programme to enter base and height of a triangle and find its area
// including library
#include <iostream>
// write the main function
using namespace std;
int main() {
	float base,height,area;//declaring variables
	cout <<"What is the base of the triangle?" <<endl;
	//read the values
	cin >> base ;
	cout <<"What is the height of the triangle?" <<endl;
	cin >> height ;
	cout << "The base and height of the triangle are "<< base << " and "<<height<<"respectively."<<endl;
	area = ((base*height)/2);//calculating the area
	cout << "The area of the triangle is "<< area <<endl;
	return 0;
}
