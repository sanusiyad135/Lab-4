// write a c++ programme to enter two angles of a triangle and find the third angle
// including library
#include <iostream>
// write the main function
using namespace std;
int main() {
	float anga , angb,angc;//declaring variables
	cout <<"What are the two angles of the triangle?"  <<endl;
	//read the angles
	cin >> anga ;
	cin >> angb ;
	cout << "The two angles of the triangle ABC are "<< anga << " and "<<angb <<"."<<endl;
	angc = (180-(anga+angb));//assigning the third angle
	cout << "The third angle of the triangle is "<< angc <<endl;
	return 0;
}
