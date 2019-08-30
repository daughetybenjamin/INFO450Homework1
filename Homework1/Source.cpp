#include <iostream>
using namespace std;

int main()
{
	int length = 5;
	int width = 10;
	float area;
	float perim;

	perim = 2 * length + 2 * width;
	area = length * width;

	cout << "The perimeter is " << perim << "." << endl;
	cout << "The area is " << area << "." << endl;

	system("pause");

	return 0;
}