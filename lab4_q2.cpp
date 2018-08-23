// write a c++ programme to enter temperature in Celsius and convert it into Farenheit
// including library
#include <iostream>
// write the main function
using namespace std;
int main() {
	float cel, faren;//declaring variables
	cout <<"What is the room temerature of the room in degree celsius?"  <<endl;
	cin >> cel;//read the value
	cout << "The temperture of the room is "<< cel<< " degree Celsius" <<endl;
	faren =((cel*9/5)+32);//convert celsius into farenheit
	cout << "The temperture of the room is "<< faren << " degree Farenheit" <<endl;
	return 0;
}
