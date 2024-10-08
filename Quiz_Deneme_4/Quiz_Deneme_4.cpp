#include <iostream>
#include <string>
#include <conio.h> /*getch kodu icin*/

using namespace std;

#undef max;

#pragma warning(disable: 4996)

void menuGoster(int secim) {
    system("cls");
    cout << (secim == 1 ? "--> " : "   ") << "Admin" << endl;
    cout << (secim == 2 ? "--> " : "   ") << "Guest" << endl;
    cout << (secim == 3 ? "--> " : "   ") << "Exit" << endl;
}

int main()
{
    string sualar;
    string sualar2;
    string sualar3;
    string sualar4;
    string sualar5;


    string cavab;
    string cavab2;
    string cavab3;
    string cavab4;
    string cavab5;


    string tru;


    int secim = 1;
    char tus;

    while (true) {
        menuGoster(secim);
        tus = _getch();

        if (tus == -32) {
            tus = _getch();
            switch (tus) {
            case 72:
                if (secim > 1) secim--;
                break;
            case 80:
                if (secim < 3) secim++;
                break;
            }
        }
        else if (tus == 13) {
            if (secim == 3) {
                cout << "program sonlandi." << endl;
                break;
            }
            else if (secim == 1) {
                system("cls");
                cout << "Admin moduna girdiniz suallar yaradin:" << endl;



                cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
                cout << "1.Suall: ";
                getline(cin, sualar);
                cout << "eminsinisze entere basi";
                cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
                cout << "cavab: ";
                getline(cin, cavab);




                cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
                cout << "2.Suall: ";
                getline(cin, sualar2);
                cout << "eminsinisze entere basi";
                cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
                cout << "cavab: ";
                getline(cin, cavab2);




                cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
                cout << "3.Suall: ";
                getline(cin, sualar3);
                cout << "eminsinisze entere basi";
                cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
                cout << "cavab: ";
                getline(cin, cavab3);




                cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
                cout << "4.Suall: ";
                getline(cin, sualar4);
                cout << "eminsinisze entere basi";
                cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
                cout << "cavab: ";
                getline(cin, cavab4);




                cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
                cout << "5.Suall: ";
                getline(cin, sualar5);
                cout << "eminsinisze entere basi";
                cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
                cout << "cavab: ";
                getline(cin, cavab5);
}