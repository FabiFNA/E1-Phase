#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
    //definitionen
    string stadtgebiet = "";
    int gaeste = 5;

    while (gaeste > 0)
    {
        //abfrage
        cout << "Preise:  A: 2 EURO - B: 2 EURO - AB: 3.50 EURO\n"
            "A: Innen - B: Aussen - AB: Innen & Aussen\n"
            "Welche Stadtgebiete moechten Sie befahren?" << endl;

        //eingabe
        cin >> stadtgebiet;

        //ausgabe

        

        if (stadtgebiet == "A")
        {
            cout << "Vielen Dank!" << endl;
            cout << "Das macht 2 EURO. Stadtgebiet A." << endl;
        }
        else if (stadtgebiet == "B")
        {
            cout << "Vielen Dank!" << endl;
            cout << "Das macht 2 EURO. Stadtgebiet B." << endl;
        }
        else if (stadtgebiet == "AB")
        {
            cout << "Vielen Dank!" << endl;
            cout << "Das macht 3.50 EURO. Stadtgebiete A & B." << endl;
        }
        else
        {
            cout << "Achten Sie bitte auf die Rechtschreibung!" << endl;
        }

        _getch();
        system("cls");

    }

}
