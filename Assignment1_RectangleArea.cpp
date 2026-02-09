#include <iostream>

using namespace std;

int main()
{

	// print name of program
	cout << "Rectangle Calculator" << endl << endl;

	// get height and width from user
	double height;
	double width;
	cout << "Enter height and width: ";
 cin>> height >> width; // read input
	// calculate area
	

	double area = height * width;
	

	// return value that indicates normal program exit
    return 0;
}

