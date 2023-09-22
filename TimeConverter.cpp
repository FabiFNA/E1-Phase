#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

	//cout << "Geben sie Minuten an, die in Sekunden umgerechnet werden sollen:" << endl;
	
	int secs = 0;
	int mins = 0;
	bool conversion;

	cout << "Geben Sie eine 1 ein, um Minuten zu Sekunden zu konvertieren.\nGeben Sie eine 0 ein, um Sekunden zu Minuten zu konvertieren." << endl;
	cin >> conversion;

	while (conversion == false)
	{
		cout << endl;
		//cout << "Geben Sie Sekunden ein, die in Minuten konvertiert werden sollen:\n";
		cin >> secs;

		mins = secs / 60;

		cout << mins << endl;
	}

	while (conversion == true)
	{
		cout << endl;
		//cout << "Geben Sie Minuten ein, die in Sekunden konvertiert werden sollen:\n";
		cin >> mins;

		secs = mins * 60;

		cout << secs << endl;
	}

	
}
