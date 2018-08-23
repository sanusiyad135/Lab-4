// write a c++ programme to enter marks of five subjects and calculate total,average and percentage.
// including library
#include <iostream>
// write the main function
using namespace std;
int main() {
	float bio,maths,chem,phy,cs,total,ave,perc;//declaring variables
	cout <<"What is your mark for Biology out of 100?" <<endl;
	cin >> bio ;//read the values
	cout <<"What is your mark for Mathematics out of 100?" <<endl;
	cin >> maths ;//read the values
	cout <<"What is your mark for Chemistry out of 100?" <<endl;
	cin >> chem ;//read the values
	cout <<"What is your mark for Physics out of 100?" <<endl;
	cin >> phy ;//read the values
	cout <<"What is your mark for Computer Science out of 100?" <<endl;
	cin >> cs ;//read the values
	total = (bio+chem+maths+phy+cs);
	cout <<"Your total mark: "<< total <<endl;// this is the total mark
	ave = (total/5);
	cout <<"Your average mark: "<< ave <<endl;//this is the average
	perc = ((total/500)*100);
	cout <<"Your percentage: "<< perc <<endl;//this is the percentage
	return 0;
}
