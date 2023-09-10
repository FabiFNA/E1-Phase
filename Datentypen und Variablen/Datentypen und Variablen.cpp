#include <iostream>
using namespace std;

int main()
{
    int zahl = 5;
    double gleitPunktZahl = 5.32;
    bool wahrOderFalsch = true;
    char einZeichen = '65';
    long eineNummer = 523;
    string meinName = "Fabrizio";

    cout << "Zahl: " << zahl << endl;
    cout << "Gleitpunktzahl: " << gleitPunktZahl << endl;
    cout << "Wahrheitswert: " << wahrOderFalsch << endl;
    cout << "Ein Zeichen: " << einZeichen << endl;
    cout << "Eine 'long' Zahl: " << eineNummer << endl;
    cout << "Mein name lautet " << meinName << endl;

    if (12 < 5)
    {
        cout << "12 ist kleiner als 5.";
    }
    else
    {
        cout << "12 ist größer als 5."; //Der Buchstabe "Ö" wird in der Konsole falsch dargestellt
    }
}
