#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Datentyp\tBits\t\Max-Wert\tMin-Wert" << endl;
	cout << setw(52) << setfill('-') << "" << endl;

	//int
	cout << "INT\t\t" << sizeof(int) * 8 << "\t" << INT_MAX << "\t" << INT_MIN << endl;

	//short
	cout << "SHORT\t\t" << sizeof(short) * 8 << "\t" << SHRT_MAX << "\t\t" << SHRT_MIN << endl;

	//long
	cout << "LONG\t\t" << sizeof(long) * 8 << "\t" << LONG_MAX << "\t" << LONG_MIN << endl;

	//char
	cout << "CHAR\t\t" << sizeof(char) * 8 << "\t" << CHAR_MAX << "\t\t" << CHAR_MIN << endl;

	//bool
	cout << "BOOL\t\t" << sizeof(bool) * 8 << "\t" << numeric_limits<bool>::max() << "\t\t" << numeric_limits<bool>::min() << endl;

	//float
	cout << "FLOAT\t\t" << sizeof(float) * 8 << "\t" << FLT_MAX << "\t" << FLT_MIN << endl;

	//double
	cout << "DOUBLE\t\t" << sizeof(double) * 8 << "\t" << DBL_MAX << "\t" << DBL_MIN << endl;

	cout << setw(52) << setfill('-') << "" << endl;
}
