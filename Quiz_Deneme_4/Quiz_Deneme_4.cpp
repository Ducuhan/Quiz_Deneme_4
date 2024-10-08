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
}